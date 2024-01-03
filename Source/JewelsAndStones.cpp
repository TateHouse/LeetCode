#include <string>
#include <unordered_set>

namespace LeetCode {
class Solution final {
public:
    [[maybe_unused]] static const int getJewelCount(const std::string& jewels, const std::string& stones) {
        const std::unordered_set<char> uniqueJewels {jewels.cbegin(), jewels.cend()};
        auto count {0};

        for (const auto& stone : stones) {
            if (uniqueJewels.contains(stone)) {
                ++count;
            }
        }

        return count;
    }
};
}