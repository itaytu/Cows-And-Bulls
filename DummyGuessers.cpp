#include "DummyGuessers.hpp"
#include <stdlib.h>

std::string RandomGuesser::guess() {
	std::string r="";
	for (uint i=0; i<this->length; ++i) {
		char c = '0' + (rand()%10);
		r += c;
	}
	return r;
}

void RandomGuesser::startNewGame(uint length) {
    this->length = length;
}

void RandomGuesser::learn(string l) {

}

void ConstantGuesser::startNewGame(uint length) {
    this->length = length;
}

void ConstantGuesser::learn(string l) {

}
