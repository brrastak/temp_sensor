
// std
#include <cstddef>  // size_t
#include <cstdint>

#pragma once


namespace jpn
{

/// @brief Converts kunrei string into katakana symbols.
/// Only takes into account lower case letters.
/// Other symbols stay unchanged if they are not inside the letters set
/// which corresponds one katakana symbol.
class KunreiParser
{
public:
    /// @brief Constructor
    /// @param maxStrLen maximum proceeded length of source string
    KunreiParser(size_t maxStrLen = 1000);

    /// @brief Convert kunrei string into katakana symbols
    /// @param str source string replaced by katakana symbols
    /// @return True if string corresponds kunrei
    bool Parse(char* str);

    /// @brief Convert kunrei string into katakana symbols
    /// @param destination to write katakana symbols
    /// @param source kunrei string
    /// @return  True if source string corresponds kunrei
    bool Parse(char* destination, const char* source);

private:
    enum class State : uint8_t;
    enum class GojuonColumn : uint8_t;
    enum class GojuonRow : uint8_t;
    struct Syllable
    {
        char consonant{no_symbol};
        char vowel{no_symbol};
        bool isIotified{false};
        bool isDakuten{false};
        bool isHandakuten{false};

        void Clear();
    };

    void proceedLetter();
    void proceedStart();
    void proceedVowel();
    void proceedLongVowel();
    void proceedShortVowel();
    void proceedIotifiedVowel();
    void proceedN();
    void proceedSyllable();
    void proceedDoubleConsonant();
    void proceedConsonantInSyllable();
    void proceedIotaInSyllable();
    void proceedVowelInSyllable();
    bool isValidKunreiLetter(char c);
    bool isVowel(char c);
    bool isConsonant(char c);
    bool isIota(char c);
    bool isIotifiedVowel(char c);
    bool isDakutenConsonant(char c);
    bool isHandakutenConsonant(char c);
    char composeSyllable();
    char getLitteVowel();
    void writeNextSymbol(char c);
    char getCurrentLetter();
    char getNextLetter();
    char removeDakuten(char c);
    char removeHandakuten();
    GojuonRow getConsonantIndex(char c);
    GojuonColumn getVowelIndex(char c);
    char getGojuonSymbol(GojuonRow row, GojuonColumn column);

    static constexpr char no_symbol = '\0';

    const size_t max_str_len;

    const char* m_src;
    char* m_dst;
    size_t m_srcIndex;
    size_t m_dstIndex;
    State m_state;
    Syllable m_syllable{};
};

}
