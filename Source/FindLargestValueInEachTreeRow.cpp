#include <limits>
#include <queue>
#include <vector>

namespace LeetCode {
struct TreeNode final {
public:
    TreeNode() : value {0} {

    }

    explicit TreeNode(const int x) : value {x} {

    }

    TreeNode(const int x, TreeNode* left, TreeNode* right) : value {x}, leftNode {left}, rightNode {right} {

    }

public:
    int value;
    TreeNode* leftNode {nullptr};
    TreeNode* rightNode {nullptr};
};

class Solution final {
public:
    [[maybe_unused]] static const std::vector<int> getLargestValuesInEachTreeRow(TreeNode* rootNode) {
        std::vector<int> values {};

        if (rootNode == nullptr) {
            return values;
        }

        std::queue<TreeNode*> nodeQueue {};
        nodeQueue.push(rootNode);

        while (!nodeQueue.empty()) {
            auto levelSize {nodeQueue.size()};
            auto largestValueAtLevel {std::numeric_limits<int>::min()};

            for (std::size_t index {0}; index < levelSize; ++index) {
                auto* currentNode {nodeQueue.front()};
                nodeQueue.pop();

                if (currentNode->leftNode != nullptr) {
                    nodeQueue.push(currentNode->leftNode);
                }

                if (currentNode->rightNode != nullptr) {
                    nodeQueue.push(currentNode->rightNode);
                }

                largestValueAtLevel = std::max(largestValueAtLevel, currentNode->value);
            }

            values.emplace_back(largestValueAtLevel);
        }

        return values;
    }
};
}