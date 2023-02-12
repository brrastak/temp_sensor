
// user
#include "katakana.hpp"
#include "kunrei_parser.hpp"


namespace jpn
{

enum class KunreiParser::State : uint8_t
{
    start,
    vowel,
    yotified_vowel,
    consonant,
    syllable,
    error
};

enum class KunreiParser::GojuonColumn : uint8_t
{
    a = 0,
    i,
    u,
    e,
    o,
    number
};

enum class KunreiParser::GojuonRow : uint8_t
{
    a = 0,
    ka,
    sa,
    ta,
    na,
    ha,
    ma,
    ya,
    ra,
    wa,
    number
};


KunreiParser::KunreiParser(size_t maxStrLen)
    : max_str_len{maxStrLen}
    , m_src{nullptr}
    , m_dst{nullptr}
    , m_srcIndex{0}
    , m_dstIndex{0}
    , m_state{State::start}
{

}

bool KunreiParser::Parse(char* str)
{
    return Parse(str, str);
}

bool KunreiParser::Parse(char* destination, const char* source)
{
    if (source == nullptr || destination == nullptr)
    {
        return false;
    }

    m_src = source;
    m_dst = destination;

    for (; m_srcIndex < max_str_len - 1; ++m_srcIndex)
    {
        if (getCurrentLetter() == '\0')
        {
            break;
        }

        proceedLetter();

        if (m_state == State::error)
        {
            break;
        }
    }

    writeNextSymbol('\0');
    if (m_state == State::error)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void KunreiParser::Syllable::Clear()
{
    consonant = no_symbol;
    vowel = no_symbol;
    isIotified = false;
    isDakuten = false;
    isHandakuten = false;
}

void KunreiParser::proceedLetter()
{
    switch (m_state)
    {
    case State::start:
        proceedStart();
        break;
    case State::vowel:
        proceedVowel();
        break;
    case State::syllable:
        proceedSyllable();
        break;
    default:
        break;
    }
}

void KunreiParser::proceedStart()
{
    m_syllable.Clear();

    char letter{getCurrentLetter()};

    if (!isValidKunreiLetter(letter))
    {
        writeNextSymbol(letter);
        return;
    }

    if (isVowel(letter))
    {
        proceedVowel();
        return;
    }

    if (isIota(letter))
    {
        proceedIotifiedVowel();
        return;
    }

    if (letter == 'n')
    {
        proceedN();
        return;
    }

    m_state = State::syllable;
    proceedSyllable();
}

void KunreiParser::proceedVowel()
{
    if (m_syllable.vowel == no_symbol)
    {
        proceedShortVowel();
    }
    else
    {
        proceedLongVowel();
    }
}

void KunreiParser::proceedLongVowel()
{
    bool isNotIotified = !m_syllable.isIotified;
    bool isTheSame = getCurrentLetter() == m_syllable.vowel;
    bool isU = getCurrentLetter() == 'u';

    bool isLongVowel = (isNotIotified && isTheSame) || isU;

    if (isLongVowel)
    {
        m_state = State::start;
        writeNextSymbol(Katakana::long_vowel);
    }
    else
    {
        proceedShortVowel();
    }
}

void KunreiParser::proceedShortVowel()
{
    m_state = isVowel(getNextLetter()) ? State::vowel : State::start;
    m_syllable.vowel = getCurrentLetter();
    writeNextSymbol(composeSyllable());
}

void KunreiParser::proceedIotifiedVowel()
{
    if (isIotifiedVowel(getNextLetter()))
    {
        m_syllable.isIotified = true;
        m_state = State::vowel;
    }
    else
    {
        m_state = State::error;
    }
}

void KunreiParser::proceedN()
{
    char next = getNextLetter();

    if (isIota(next) || isVowel(next))
    {
        m_state = State::syllable;
        proceedSyllable();
    }
    else
    {
        m_syllable.consonant = 'n';
        m_state = State::start;
        writeNextSymbol(composeSyllable());
    }
}

void KunreiParser::proceedSyllable()
{
    char current{getCurrentLetter()};

    if (isConsonant(current) && current == getNextLetter())
    {
        proceedDoubleConsonant();
        return;
    }

    if (isConsonant(current))
    {
        proceedConsonantInSyllable();
        return;
    }

    if (isIota(current))
    {
        proceedIotaInSyllable();
        return;
    }

    if (isVowel(current))
    {
        proceedVowelInSyllable();
        return;
    }
}

void KunreiParser::proceedDoubleConsonant()
{
    if (getCurrentLetter() == 'w')
    {
        m_state = State::error;
        return;
    }

    writeNextSymbol(Katakana::little_tu);
}

void KunreiParser::proceedConsonantInSyllable()
{
    char current{getCurrentLetter()};
    char next{getNextLetter()};

    if (! (isVowel(next) || isIota(next)))
    {
        m_state = State::error;
        return;
    }

    if (current == 'w' && next != 'a' && next != 'o')
    {
        m_state = State::error;
        return;
    }

    if (isDakutenConsonant(current))
    {
        m_syllable.isDakuten = true;
        current = removeDakuten(current);
    }

    if (isHandakutenConsonant(current))
    {
        m_syllable.isHandakuten = true;
        current = removeHandakuten();
    }

    m_syllable.consonant = current;
}

void KunreiParser::proceedIotaInSyllable()
{
    if (!isIotifiedVowel(getNextLetter()))
    {
        m_state = State::error;
        return;
    }

    m_syllable.isIotified = true;
}

void KunreiParser::proceedVowelInSyllable()
{
    m_state = State::start;
    m_syllable.vowel = getCurrentLetter();
    writeNextSymbol(composeSyllable());
    if (m_syllable.isDakuten)
    {
        writeNextSymbol(Katakana::dakuten);
    }
    if (m_syllable.isHandakuten)
    {
        writeNextSymbol(Katakana::handakuten);
    }
    if (m_syllable.isIotified)
    {
        writeNextSymbol(getLitteVowel());
    }
}

bool KunreiParser::isValidKunreiLetter(char c)
{
    return isVowel(c) || isIota(c) || isConsonant(c);
}

bool KunreiParser::isVowel(char c)
{
    return c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o';
}

bool KunreiParser::isConsonant(char c)
{
    bool isOrdinaryConsonant{};

    isOrdinaryConsonant = c == 'k' || c == 's' || c == 't' || c == 'n' 
        || c == 'h' || c == 'm' || c == 'r' || c == 'w';

    return isOrdinaryConsonant || isDakutenConsonant(c) || isHandakutenConsonant(c);
}

bool KunreiParser::isIota(char c)
{
    return c == 'y';
}

bool KunreiParser::isIotifiedVowel(char c)
{
    return c == 'a' || c == 'u' || c == 'o';
}

bool KunreiParser::isDakutenConsonant(char c)
{
    return c == 'g' || c == 'z' || c == 'd' || c == 'b'; 
}

bool KunreiParser::isHandakutenConsonant(char c)
{
    return c == 'p';
}

char KunreiParser::composeSyllable()
{
    if (m_syllable.consonant == no_symbol)
    {
        auto row = m_syllable.isIotified ? GojuonRow::ya : GojuonRow::a;

        return getGojuonSymbol(row, getVowelIndex(m_syllable.vowel));
    }

    if (m_syllable.consonant == 'n' && m_syllable.vowel == no_symbol)
    {
        return Katakana::n;
    }

    if (m_syllable.isIotified)
    {
        return getGojuonSymbol(getConsonantIndex(m_syllable.consonant), GojuonColumn::i);
    }
    else
    {
        return getGojuonSymbol(getConsonantIndex(m_syllable.consonant)
            , getVowelIndex(m_syllable.vowel));
    }
}

char KunreiParser::getLitteVowel()
{
    switch (m_syllable.vowel)
    {
    case 'a':
        return Katakana::little_ya;
    case 'u':
        return Katakana::little_yu;
    case 'o':
        return Katakana::little_yo;
    }

    return no_symbol;
}

void KunreiParser::writeNextSymbol(char c)
{
    if (m_dstIndex < max_str_len)
    {
        m_dst[m_dstIndex] = c;
        ++m_dstIndex;
    }
}

char KunreiParser::getCurrentLetter()
{
    return m_src[m_srcIndex];
}

char KunreiParser::getNextLetter()
{
    return m_src[m_srcIndex + 1];
}

char KunreiParser::removeDakuten(char c)
{
    switch (c)
    {
    case 'g':
        return 'k';
    case 'z':
        return 's';
    case 'd':
        return 't';
    case 'b':
        return 'h';
    default:
        return no_symbol;
    }
}

char KunreiParser::removeHandakuten()
{
    return 'h';
}

KunreiParser::GojuonRow KunreiParser::getConsonantIndex(char c)
{
    switch (c)
    {
    case 'a':
        return GojuonRow::a;
    case 'k':
        return GojuonRow::ka;
    case 's':
        return GojuonRow::sa;
    case 't':
        return GojuonRow::ta;
    case 'n':
        return GojuonRow::na;
    case 'h':
        return GojuonRow::ha;
    case 'm':
        return GojuonRow::ma;
    case 'y':
        return GojuonRow::ya;
    case 'r':
        return GojuonRow::ra;
    case 'w':
        return GojuonRow::wa;
    default:
        return GojuonRow::a;
    }
}

KunreiParser::GojuonColumn KunreiParser::getVowelIndex(char c)
{
    switch (c)
    {
    case 'a':
        return GojuonColumn::a;
    case 'i':
        return GojuonColumn::i;
    case 'u':
        return GojuonColumn::u;
    case 'e':
        return GojuonColumn::e;
    case 'o':
        return GojuonColumn::o;
    default:
        return GojuonColumn::a;
    }
}

char KunreiParser::getGojuonSymbol(GojuonRow row, GojuonColumn column)
{
    constexpr auto columns_number = static_cast<uint8_t>(GojuonColumn::number);
    constexpr auto rows_number = static_cast<uint8_t>(GojuonRow::number);
    constexpr char gojuon[rows_number][columns_number] = 
    {
        {Katakana::a, Katakana::i, Katakana::u, Katakana::e, Katakana::o},
        {Katakana::ka, Katakana::ki, Katakana::ku, Katakana::ke, Katakana::ko},
        {Katakana::sa, Katakana::si, Katakana::su, Katakana::se, Katakana::so},
        {Katakana::ta, Katakana::ti, Katakana::tu, Katakana::te, Katakana::to},
        {Katakana::na, Katakana::ni, Katakana::nu, Katakana::ne, Katakana::no},
        {Katakana::ha, Katakana::hi, Katakana::hu, Katakana::he, Katakana::ho},
        {Katakana::ma, Katakana::mi, Katakana::mu, Katakana::me, Katakana::mo},
        {Katakana::ya, no_symbol, Katakana::yu, no_symbol, Katakana::yo},
        {Katakana::ra, Katakana::ri, Katakana::ru, Katakana::re, Katakana::ro},
        {Katakana::wa, no_symbol, no_symbol, no_symbol, Katakana::o}
    };

    return gojuon[static_cast<uint8_t>(row)][static_cast<uint8_t>(column)];
}


}
