#include <string>
#include <vector>

namespace LeetCode {
class Solution final {
public:
    [[maybe_unused]] static const int getIndexOfFirstOccurrenceOfSubstring(const std::string& source,
                                                                           const std::string& pattern) noexcept {
        if (pattern.empty()) {
            return 0;
        }

        const auto haystackLength {source.length()};
        const auto needleLength {pattern.length()};

        if (haystackLength < needleLength) {
            return -1;
        }

        for (auto startIndex {0}; startIndex < haystackLength - needleLength; ++startIndex) {
            auto matchIndex {0};

            while (matchIndex < needleLength) {
                if (source[startIndex + matchIndex] != pattern[matchIndex]) {
                    break;
                }

                ++matchIndex;
            }

            if (matchIndex == needleLength) {
                return startIndex;
            }
        }

        return -1;
    }

    [[maybe_unused]] static const int getIndexOfFirstOccurrenceOfSubstringUsingKMP(const std::string& source,
                                                                                   const std::string& pattern) noexcept {
        if (pattern.empty()) {
            return 0;
        }

        if (pattern.size() > source.size()) {
            return -1;
        }

        auto longestPrefixSuffixArray {buildLongestPrefixSuffixArray(pattern)};
        auto haystackIndex {0};
        auto needleIndex {0};

        while (haystackIndex < source.size()) {
            if (source[haystackIndex] == pattern[needleIndex]) {
                ++haystackIndex;
                ++needleIndex;

                if (needleIndex == pattern.size()) {
                    return haystackIndex - needleIndex;
                }
            } else if (needleIndex > 0) {
                needleIndex = longestPrefixSuffixArray[needleIndex - 1];
            } else {
                ++haystackIndex;
            }
        }

        return -1;
    }

private:
    [[nodiscard]] static const std::vector<int> buildLongestPrefixSuffixArray(const std::string& pattern) noexcept {
        auto prefixLength {0};
        auto currentIndex {1};
        auto longestPrefixSuffixArray {std::vector<int>(pattern.length(), 0)};

        while (currentIndex < pattern.size()) {
            if (pattern[currentIndex] == pattern[prefixLength]) {
                ++prefixLength;
                longestPrefixSuffixArray[currentIndex] = prefixLength;
                ++currentIndex;
                continue;
            }

            if (prefixLength != 0) {
                prefixLength = longestPrefixSuffixArray[prefixLength - 1];
            } else {
                longestPrefixSuffixArray[currentIndex] = 0;
                ++currentIndex;
            }
        }

        return longestPrefixSuffixArray;
    }
};
}