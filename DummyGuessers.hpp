#pragma once
#include "Guesser.hpp"


/**
 * ConstantGuesser is a guesser that always guesses the same string. 
 */
class ConstantGuesser: public bullpgia::Guesser {
		string myConstantString;
	public:
		explicit ConstantGuesser(const string& constantString) { myConstantString = constantString; }
		string guess() override {
			return myConstantString;
		}
		void startNewGame(uint length) override ;
		void learn(string l) override;
};

/**
 * RandomGuesser is a guesser that guesses a random string.
 */
class RandomGuesser: public bullpgia::Guesser {
	string guess() override;
	void startNewGame(uint length) override;
    void learn(string l) override;
};
