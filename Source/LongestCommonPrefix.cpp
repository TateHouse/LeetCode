#include <string>
#include <vector>

namespace LeetCode {
class Solution {
public:
    [[maybe_unused]] static const std::string longestCommonPrefix(std::vector<std::string>& strings) {
        if (strings.empty()) {
            return "";
        }

        auto prefix {strings[0]};
        for (std::size_t stringIndex {1}; stringIndex < strings.size(); ++stringIndex) {
            auto charIndex {0};

            while (charIndex < strings[stringIndex].size() && charIndex < prefix.size() &&
                   strings[stringIndex][charIndex] == prefix[charIndex]) {
                ++charIndex;
            }

            prefix = prefix.substr(0, charIndex);

            if (prefix.empty()) {
                return "";
            }
        }

        return prefix;
    }
};
}