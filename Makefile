
TARGET := temp_sensor

# Toolchain
CC = arm-none-eabi-gcc
CXX = arm-none-eabi-g++
LD = arm-none-eabi-g++
CP = arm-none-eabi-objcopy
SZ = arm-none-eabi-size
DUMP = arm-none-eabi-objdump
READELF = arm-none-eabi-readelf


# Flags
MCU_FLAGS = -mcpu=cortex-m3 -mthumb
OPTIMIZE_FLAGS = -O0
CSTD_FLAGS = -std=c99
CXXSTD_FLAGS = -std=c++17

# Defines
# DEFINES += STM32F103xB
# Add a prefix to DEFINES. So DEFINE would become -DDEFINE. GCC understands this -D flag
# DEF_FLAGS := $(addprefix -D,$(DEFINES))


BUILD_DIR := ./build
SRC_DIRS := ./src
LD_DIR := ./ld

# Target files
TARGET_ELF = $(BUILD_DIR)/$(TARGET).elf
TARGET_HEX = $(BUILD_DIR)/$(TARGET).hex

# Find all the C, C++ and ASM files we want to compile
# Note the single quotes around the * expressions. Make will incorrectly expand these otherwise.
SRCS := $(shell find $(SRC_DIRS) -name '*.cpp' -or -name '*.c' -or -name '*.s' -or -name '*.S')

# Find linker script file
# Note the single quotes around the * expressions. Make will incorrectly expand these otherwise.
LDSCRIPT := $(shell find $(LD_DIR) -name '*.ld')

# String substitution for every C/C++ file.
# As an example, hello.cpp turns into ./build/hello.cpp.o
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)

# String substitution (suffix version without %).
# As an example, ./build/hello.cpp.o turns into ./build/hello.cpp.d
DEPS := $(OBJS:.o=.d)

# Every folder in ./src will need to be passed to GCC so that it can find header files
INC_DIRS := $(shell find $(SRC_DIRS) -type d)
# Add a prefix to INC_DIRS. So moduleA would become -ImoduleA. GCC understands this -I flag
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

# Common compiler flags
# The -MMD and -MP flags together generate Makefiles for us!
# These files will have .d instead of .o as the output.
CPPFLAGS := $(INC_FLAGS) -MMD -MP
CPPFLAGS += $(MCU_FLAGS) $(OPTIMIZE_FLAGS) $(DEF_FLAGS)
CPPFLAGS += -Wall -Wextra -Wpedantic
CPPFLAGS += -g
CPPFLAGS += -ffunction-sections -fdata-sections
CPPFLAGS += -fno-use-cxa-atexit -fno-exceptions -fno-unwind-tables

CFLAGS := $(CSTD_FLAGS)

CXXFLAGS := $(CXXSTD_FLAGS)

LDFLAGS := -Wl,--gc-sections
LDFLAGS += $(MCU_FLAGS)
LDFLAGS += -T$(LDSCRIPT)
LDFLAGS += -nostartfiles
LDFLAGS += --specs=nosys.specs
LDFLAGS += --specs=nano.specs
LDFLAGS += -Wl,--cref,-Map=$(TARGET).map

# The final build step
$(TARGET_HEX): $(TARGET_ELF)
	$(CP) -O ihex $< $@

# The elf build step
$(TARGET_ELF): $(OBJS)
	$(LD) $(OBJS) -o $@ $(LDFLAGS)

# Build step for ASM source
$(BUILD_DIR)/%.s.o: %.s
	mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@
	
# Build step for ASM source
$(BUILD_DIR)/%.S.o: %.S
	mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

# Build step for C source
$(BUILD_DIR)/%.c.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

# Build step for C++ source
$(BUILD_DIR)/%.cpp.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@


.PHONY: build clean flash reset size dump

build: $(TARGET_HEX) size

clean:
	@echo "****** CLEAN ******"
	rm -r $(BUILD_DIR)

flash: build
	@echo "****** FLASH ******"
	openocd -f interface/stlink-v2.cfg -f target/stm32f1x.cfg -c "program $(TARGET_HEX) verify exit reset"
	@echo "****** FLASHED SUCCESFULLY ******"

reset:
	openocd -f interface/stlink-v2.cfg -f target/stm32f1x.cfg -c "init ; reset ; exit"
	@echo "****** RESET ******"

size:
	@echo "****** SIZE ******"
	$(SZ) $(TARGET_ELF)

dump:
	$(READELF) -h $(TARGET_ELF)
	$(DUMP) --demangle --debugging --source --disassemble-all $(TARGET_ELF) > $(TARGET).dump

# Include the .d makefiles. The - at the front suppresses the errors of missing
# Makefiles. Initially, all the .d files will be missing, and we don't want those
# errors to show up.
-include $(DEPS)
