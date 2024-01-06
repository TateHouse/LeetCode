#include <string>
#include <unordered_map>

namespace LeetCode {
class Solution final {
public:
    [[maybe_unused]] static const int getLengthOfLongestSubstring(const std::string& string) {
        std::unordered_map<char, int> characters {};
        auto maxLength {0};
        auto startIndex {0};

        for (auto endIndex {0}; endIndex < string.length(); ++endIndex) {
            const auto& currentCharacter {string[endIndex]};

            if (characters.contains(currentCharacter) && characters[currentCharacter] >= startIndex) {
                startIndex = characters[currentCharacter] + 1;
            }

            characters[currentCharacter] = endIndex;
            maxLength = std::max(maxLength, endIndex - startIndex + 1);
        }

        return maxLength;
    }
};
}