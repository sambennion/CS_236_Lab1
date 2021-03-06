//
// Created by Samuel Bennion on 2/1/21.
//

#ifndef CS236_LAB1_UNDEFINEDSTRINGAUTOMA_H
#define CS236_LAB1_UNDEFINEDSTRINGAUTOMA_H
#include "Automaton.h"

class UndefinedStringAutoma : public Automaton{
public:
    explicit UndefinedStringAutoma(TokenType type) : Automaton(type) { this->type = type;};

    int Start(const string &input);

    int s0(const string &input);

    bool isDoubleQuote(const string input);
};


#endif //CS236_LAB1_UNDEFINEDSTRINGAUTOMA_H
