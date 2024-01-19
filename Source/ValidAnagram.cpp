#include <string>
#include <unordered_map>

namespace LeetCode {
class Solution final {
public:
    [[maybe_unused]] static bool isValid(const std::string& first, const std::string& second) {
        if (first.length() != second.length()) {
            return false;
        }

        std::unordered_map<char, int> characters {};

        for (const auto& character : first) {
            characters[character]++;
        }

        for (const auto& character : second) {
            if (!characters.contains(character)) {
                return false;
            }

            auto& characterValue {characters[character]};
            --characterValue;

            if (characterValue == 0) {
                characters.erase(character);
            }
        }

        return characters.empty();
    }
};
}