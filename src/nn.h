#pragma once

template<typename T>
class NN {
public:
    NN() {};
    ~NN() {};

    double agn(double value) {
        return value > 0 ? 1 : 0;
    }

    double sum(double a1, double a2, double a3) {
        return a1 * w1  + a2 * w2 + a3 * w3;
    }
private:
    double w1{0.2};
    double w2{0.3};
    double w3{0.4};
};
