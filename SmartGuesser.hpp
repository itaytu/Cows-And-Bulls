#ifndef EX4_SMARTGUESSER_HPP
#define EX4_SMARTGUESSER_HPP

#include "Guesser.hpp"
#include "iostream"
using namespace std;
class SmartGuesser : public bullpgia::Guesser{

     string guess();
     void startNewGame(uint length);
     void learn(string l);
};

#endif //EX4_SMARTGUESSER_HPP
