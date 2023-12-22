#include <unordered_map>
#include <vector>
#include <stdexcept>

namespace LeetCode {
class Solution {
public:
    [[maybe_unused]] static std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        std::unordered_map<int, int> seen;

        for (std::size_t index {0}; index < numbers.size(); ++index) {
            const auto number {numbers[index]};
            const auto complement {target - number};

            if (const auto iterator {seen.find(complement)}; iterator != seen.end()) {
                return {static_cast<int>(index), iterator->second};
            }

            seen.insert({number, static_cast<int>(index)});
        }

        throw std::invalid_argument("No two sum solution!");
    }
};
}