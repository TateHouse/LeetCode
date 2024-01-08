#include <stack>
#include <string>
#include <vector>

namespace LeetCode {
class Solution final {
public:
    [[maybe_unused]] static const int evaluateReversePolishNotation(const std::vector<std::string>& tokens) {
        std::stack<int> operands {};

        for (const auto& token : tokens) {
            if (std::isdigit(token[0]) || (token[0] == '-' && token.size() > 1 && std::isdigit(token[1]))) {
                operands.emplace(std::stoi(token));
                continue;
            }

            const auto secondOperand {operands.top()};
            operands.pop();
            const auto firstOperand {operands.top()};
            operands.pop();

            if (token == "+") {
                operands.emplace(firstOperand + secondOperand);
            } else if (token == "-") {
                operands.emplace(firstOperand - secondOperand);
            } else if (token == "*") {
                operands.emplace(firstOperand * secondOperand);
            } else if (token == "/") {
                operands.emplace(firstOperand / secondOperand);
            }
        }

        return operands.top();
    }
};
}