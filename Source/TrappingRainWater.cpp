#include <vector>

namespace LeetCode {
class Solution final {
public:
    [[maybe_unused]] static const int getAmountOfTrappedRainWater(const std::vector<int>& heights) noexcept {
        if (heights.empty()) {
            return 0;
        }

        auto leftIndex {0};
        auto rightIndex {heights.size() - 1};
        auto leftMaxHeight {0};
        auto rightMaxHeight {0};
        auto amountOfTrappedRainWater {0};

        while (leftIndex < rightIndex) {
            if (heights[leftIndex] < heights[rightIndex]) {
                leftMaxHeight = std::max(leftMaxHeight, heights[leftIndex]);
                amountOfTrappedRainWater += leftMaxHeight - heights[leftIndex];
                ++leftIndex;
            } else {
                rightMaxHeight = std::max(rightMaxHeight, heights[rightIndex]);
                amountOfTrappedRainWater += rightMaxHeight - heights[rightIndex];
                --rightIndex;
            }
        }

        return amountOfTrappedRainWater;
    }
};
}