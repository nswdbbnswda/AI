#include <iostream>
#include "nn.h"

int main() {
    std::cout << "AI" << std::endl;
    NN<double> nn;
    auto val = nn.agn(nn.sum(-10.5, 2.5, 2.5));
    std::cout << "output:" << val << std::endl;
    return 0;
}
