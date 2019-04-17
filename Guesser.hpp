//
// Created by moshe on 16/04/2019.
//

#ifndef EX4_GUESSER_HPP
#define EX4_GUESSER_HPP

#include "string"
#include "iostream"
using namespace std;
typedef unsigned int uint;
namespace bullpgia {
    class Guesser {
    public:
        virtual string guess() = 0;
        virtual void startNewGame(uint length){};
        virtual void learn(string l){};
        uint length;
    };
}
#endif //EX4_GUESSER_HPP
