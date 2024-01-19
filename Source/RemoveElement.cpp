#include <vector>

namespace LeetCode {
class Solution final {
public:
    [[maybe_unused]] static int removeAllInstances(std::vector<int>& numbers, const int target) noexcept {
        auto index {0};

        for (const auto& number : numbers) {
            if (number != target) {
                numbers[index] = number;
                ++index;
            }
        }

        return index;
    }
};
}