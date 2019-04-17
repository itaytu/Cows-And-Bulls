//
// Created by moshe on 16/04/2019.
//

#ifndef EX4_CHOOSER_HPP
#define EX4_CHOOSER_HPP

#include "iostream"
typedef unsigned int uint;
using namespace std;
typedef unsigned int uint;
namespace bullpgia {

    class Chooser {
    public:
        virtual string choose(uint) =0;
    };
}

#endif //EX4_CHOOSER_HPP
