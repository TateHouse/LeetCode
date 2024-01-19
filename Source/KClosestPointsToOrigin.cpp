#include <algorithm>
#include <vector>

namespace LeetCode {
class Solution final {
public:
    [[maybe_unused]] static std::vector<std::vector<int>> kClosest(std::vector<std::vector<int>>& points,
                                                                         const int closestPointCount) {
        const auto comparison {[](const std::vector<int>& left, const std::vector<int>& right) {
            const auto leftDistance {left[0] * left[0] + left[1] * left[1]};
            const auto rightDistance {right[0] * right[0] + right[1] * right[1]};
            return leftDistance < rightDistance;
        }};

        std::ranges::make_heap(points, comparison);

        auto result {std::vector<std::vector<int>>(closestPointCount, std::vector<int>())};
        for (auto index {0}; index < closestPointCount; ++index) {
            std::ranges::pop_heap(points, comparison);
            result[index] = std::move(points.back());
            points.pop_back();
        }

        return result;
    }
};
}