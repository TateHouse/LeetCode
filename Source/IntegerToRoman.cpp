#include <string>
#include <vector>
#include <utility>

namespace LeetCode {
class Solution final {
public:
    [[maybe_unused]] static const std::string intToRoman(int number) {
        const std::vector<std::pair<int, std::string>> romanNumerals {
                {1000, "M"},
                {900,  "CM"},
                {500,  "D"},
                {400,  "CD"},
                {100,  "C"},
                {90,   "XC"},
                {50,   "L"},
                {40,   "XL"},
                {10,   "X"},
                {9,    "IX"},
                {5,    "V"},
                {4,    "IV"},
                {1,    "I"}
        };

        std::string result {};

        for (const auto& [value, roman]: romanNumerals) {
            while (number >= value) {
                result.append(roman);
                number = number - value;
            }
        }

        return result;
    }
};
}