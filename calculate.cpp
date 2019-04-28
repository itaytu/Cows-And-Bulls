#include "calculate.hpp"
#include "iostream"

using namespace std;

string bullpgia::calculateBullAndPgia(string choice, string guess) {
    string result;
    int bull = 0;
    int pgia = 0;
    string newChoice = choice;
    string newGuess = guess;

    for (int i = 0; i < choice.length(); ++i) {
        if(choice[i] == guess[i]) {
                bull++;
                int index = newChoice.find(choice[i]);
                newChoice.erase(index, 1);
                newGuess.erase(index, 1);
        }
    }

    for (int i = 0; i < newChoice.length(); ++i) {
        if(newChoice.find(newGuess[i]) != string::npos) pgia++;
    }

    result = to_string(bull) + ',' + to_string(pgia);
    return result;
}
