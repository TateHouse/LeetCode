#include <string>

namespace LeetCode {
class Solution final {
public:
    [[maybe_unused]] static const int getRomanNumeralValue(const std::string& string) noexcept {
        auto result {0};
        auto previousValue {0};

        for (const auto& character : string) {
            const auto currentValue {Solution::convertRomanChar(character)};
            result += (currentValue - 2 * (currentValue > previousValue ? previousValue : 0));

            previousValue = currentValue;
        }

        return result;
    }

private:
    [[nodiscard]] static int convertRomanChar(const char& character) noexcept {
        switch (character) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }
};
}