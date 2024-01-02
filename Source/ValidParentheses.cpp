#include <stack>
#include <string>
#include <unordered_map>

namespace LeetCode {
class Solution final {
public:
    [[maybe_unused]] static const bool isValid(const std::string& string) {
        if (string.size() % 2 != 0) {
            return false;
        }

        const auto bracketPairs {std::unordered_map<char, char> {
                {')', '('},
                {']', '['},
                {'}', '{'}
        }};

        auto stack {std::stack<char> {}};

        for (const auto& character: string) {
            const auto iterator {bracketPairs.find(character)};
            if (iterator == bracketPairs.end()) {
                stack.push(character);
                continue;
            }

            const auto topElement {stack.empty() ? ' ' : stack.top()};
            if (!stack.empty()) {
                stack.pop();
            }

            if (topElement != iterator->second) {
                return false;
            }
        }

        return stack.empty();
    }
};
}