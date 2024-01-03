#include <vector>

namespace LeetCode {
class Solution final {
public:
    [[maybe_unused]] static const int removeDuplicatesFromSortedArray(std::vector<int>& numbers) {
        if (numbers.empty()) {
            return 0;
        }

        auto uniqueIndex {0};
        for (auto currentIndex {1}; currentIndex < numbers.size(); ++currentIndex) {
            if (numbers[currentIndex] != numbers[uniqueIndex]) {
                ++uniqueIndex;
                numbers[uniqueIndex] = numbers[currentIndex];
            }
        }

        return uniqueIndex + 1;
    }
};
}