#include <numeric>
#include <vector>

namespace LeetCode {
class Solution final {
public:
    [[maybe_unused]] static const int getTargetInsertIndex(const std::vector<int>& numbers,
                                                           const int targetElement) noexcept {
        auto leftIndex {0};
        auto rightIndex {static_cast<int>(numbers.size())};

        if (targetElement > numbers[rightIndex - 1]) {
            return rightIndex;
        }

        while (leftIndex <= rightIndex) {
            const auto middleIndex {std::midpoint(leftIndex, rightIndex)};
            const auto& middleElement {numbers[middleIndex]};

            if (middleElement == targetElement) {
                return middleIndex;
            }

            if (middleElement > targetElement) {
                rightIndex = middleIndex - 1;
            } else {
                leftIndex = middleIndex + 1;
            }
        }

        return leftIndex;
    }
};
}