#include "MathUtils.hpp"
#include "AdvancedMath.hpp"

namespace AdvancedMath {
    int square(int n) {
        // Requirement: use MathUtils::multiply, not n * n directly
        return MathUtils::multiply(n, n);
    }
}
