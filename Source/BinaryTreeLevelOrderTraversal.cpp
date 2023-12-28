#include <queue>
#include <vector>

namespace LeetCode {
struct TreeNode {
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

class Solution {
    [[maybe_unused]] static const std::vector<std::vector<int>> levelOrder(const TreeNode* const node) {
        std::vector<std::vector<int>> elements {};

        if (node == nullptr) {
            return elements;
        }

        std::queue<const TreeNode*> nodeQueue {};
        nodeQueue.emplace(node);

        while (!nodeQueue.empty()) {
            std::vector<int> currentLevelElements {};
            const auto currentLevelElementCount {nodeQueue.size()};

            for (std::size_t index {0}; index < currentLevelElementCount; ++index) {
                const auto currentNode {nodeQueue.front()};
                nodeQueue.pop();

                if (currentNode == nullptr) {
                    continue;
                }

                currentLevelElements.emplace_back(currentNode->value);

                if (currentNode->leftNode != nullptr) {
                    nodeQueue.emplace(currentNode->leftNode);
                }

                if (currentNode->rightNode != nullptr) {
                    nodeQueue.emplace(currentNode->rightNode);
                }
            }

            elements.emplace_back(currentLevelElements);
        }

        return elements;
    }
};
}