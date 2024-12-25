#include <iostream>
#include "Eigen/Dense"
#include "Eigen/Core"
#include "Eigen/LU"
#include "Eigen/SVD"
#include "Eigen/QR"
#include "nn.h"

int main() {
    Eigen::Matrix<int, 2, 2> A;
    A << 1, 2,
         4, 8;
    Eigen::Matrix<int, 2, 2> B;
    B << 5, 6,
         7, 8;
    std::cout << A << std::endl;
    std::cout << B << std::endl;
    auto C = A + B;
    auto D = A * B;
    std::cout << D << std::endl;
    NN<int> nn;
    return 0;
}
