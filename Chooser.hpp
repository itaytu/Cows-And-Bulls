#ifndef EX4_CHOOSER_HPP
#define EX4_CHOOSER_HPP

#include "iostream"
typedef unsigned int uint;
using namespace std;

namespace bullpgia {
    class Chooser {
    public:
        virtual string choose(uint)=0;
    };
}

#endif //EX4_CHOOSER_HPP
