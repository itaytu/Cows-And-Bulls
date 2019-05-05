#ifndef EX4_SMARTGUESSER_HPP
#define EX4_SMARTGUESSER_HPP

#include "Guesser.hpp"
#include "string"
#include "calculate.hpp"
#include <list>
#include <iterator>

namespace bullpgia {
    class SmartGuesser : public bullpgia::Guesser {
        string myGuess;
        string guess() override;

        void startNewGame(uint length) override;

        void learn(string l) override;

        list<string> myNumbers;

        void buildSet(uint length);
    };
}
#endif //EX4_SMARTGUESSER_HPP
