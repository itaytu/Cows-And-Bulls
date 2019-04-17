//
// Created by moshe on 16/04/2019.
//

#include "SmartGuesser.hpp"

void SmartGuesser::startNewGame(uint length) {
    Guesser::startNewGame(length);
}

string SmartGuesser::guess() {
    return Guesser::guess();
}

void SmartGuesser::learn(string l) {
    Guesser::learn(l);
}
