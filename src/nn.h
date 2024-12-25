#pragma once
#include <iostream>

template<typename T>
class NN {
public:
    NN() {}
    ~NN() {}

    int sgn(double value) {
        return value > 0 ? 1 : 0;
    }
};
