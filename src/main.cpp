#include <iostream>
#include <sstream>
#include "MathUtils.hpp"
#include "AdvancedMath.hpp"

int main(int argc, char** argv) {
    int a = 3, b = 4; // defaults so the provided pytest still passes

    // for other test cases/inputs
    if (argc >= 3) {
        std::istringstream(argv[1]) >> a;
        std::istringstream(argv[2]) >> b;
    }

    std::cout << "a + b = " << MathUtils::add(a, b) << '\n';
    std::cout << "a * b = " << MathUtils::multiply(a, b) << '\n';
    std::cout << "square(a) = " << AdvancedMath::square(a) << '\n';
    return 0;
}
