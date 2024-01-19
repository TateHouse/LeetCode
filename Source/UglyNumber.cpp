#include <array>

namespace LeetCode {
class Solution final {
public:
    [[maybe_unused]] static bool isNumberUgly(int number) {
        if (number <= 0) {
            return false;
        }

        for (constexpr std::array<int, 3> primeFactors {2, 3, 5}; const auto& primeFactor : primeFactors) {
            while (number % primeFactor == 0) {
                number /= primeFactor;
            }
        }

        return number == 1;
    }
};
}