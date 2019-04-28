#ifndef EX4_SMARTGUESSER_HPP
#define EX4_SMARTGUESSER_HPP

#include "Guesser.hpp"
#include "iostream"
using namespace std;
namespace bullpgia {
    class SmartGuesser : public bullpgia::Guesser {

        string guess() override;

        void startNewGame(uint length) override;

        void learn(string l) override;
    };
}
#endif //EX4_SMARTGUESSER_HPP
