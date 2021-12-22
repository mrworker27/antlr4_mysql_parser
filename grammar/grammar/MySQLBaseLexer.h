#ifndef __BASELEXER__
#define __BASELEXER__

#include "antlr4-runtime.h"

using namespace antlr4;
using namespace antlr4::atn;

class MySQLBaseLexer : public Lexer
{
public:
    enum
    {
        CURDATE_SYMBOL,
        ADDDATE_SYMBOL,
        BIT_AND_SYMBOL,
        BIT_OR_SYMBOL,
        BIT_XOR_SYMBOL,
        CAST_SYMBOL,
        COUNT_SYMBOL,
        CURTIME_SYMBOL,
        DATE_ADD_SYMBOL,
        MAX_SYMBOL,
        SUBSTRING_SYMBOL,
        GROUP_CONCAT_SYMBOL,
        MIN_SYMBOL,
        EXTRACT_SYMBOL,
        DATE_SUB_SYMBOL,
        NOT2_SYMBOL,
        NOT_SYMBOL,
        NOW_SYMBOL,
        POSITION_SYMBOL,
        USER_SYMBOL,
        STDDEV_SAMP_SYMBOL,
        STD_SYMBOL,
        SUBDATE_SYMBOL,
        SUM_SYMBOL,
        SYSDATE_SYMBOL,
        TRIM_SYMBOL,
        VARIANCE_SYMBOL,
        VAR_SAMP_SYMBOL
    };
public:
    MySQLBaseLexer(CharStream *input) : Lexer(input) {}
    void emitDot() {}
    bool isSqlModeActive(int MOO)
    {
        return false; // some logic here from ts
    }
    int determineFunction(int prop)
    {
        return prop; // some logic here from ts
    }
    int checkCharset(std::string & text)
    {
        return 0;  // some logic here from ts
    }
    bool checkVersion(std::string & text)
    {
        return false; // some logic here from ts
    }
public:
    // MOO: change all of it
    int type = 0; // MOO: some enum from ts
    bool inVersionComment = true; // MOO: default value???
    int serverVersion = 0; // MOO: type and default value???
    std::string text = "aboba"; // MOO: wtf is this?
    // MOO: base constructor needs it
    atn::LexerATNSimulator * _interpreter = nullptr;
    ATN _atn;
    std::vector<dfa::DFA> decisionToDFA;
    PredictionContextCache _sharedContextCache;
};

#endif // __BASELEXER__
