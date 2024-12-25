#pragma once

template<typename T>
class NN {
public:
    NN() {};
    ~NN() {};
    double agn(double value) {
        return value > 0 ? 1 : 0;
    }
};
