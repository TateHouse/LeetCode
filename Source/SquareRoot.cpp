#include <numeric>

namespace LeetCode {
class Solution final {
public:
    [[maybe_unused]] static const int squareRoot(const int x) {
        if (x < 2) {
            return x;
        }

        long long left {0};
        long long right {x};

        while (left <= right) {
            const long long middle {std::midpoint(left, right)};
            const long long middleSquared {middle * middle};

            if (middleSquared > x) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }

        return static_cast<int>(right);
    }
};
}