#include <limits>

namespace LeetCode {
class Solution final {
public:
    [[maybe_unused]] static const bool isPalindrome(int number) {
        if (number < 0) {
            return false;
        }

        const auto original {number};
        auto reversed {0};

        while (number > 0) {
            const auto digit {number % 10};

            if (reversed > (std::numeric_limits<int>::max() - digit) / 10) {
                return false;
            }

            reversed = reversed * 10 + digit;
            number = number / 10;
        }

        return original == reversed;
    }
};
}