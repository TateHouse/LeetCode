#include <algorithm>

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
    [[maybe_unused]] static const int maxDepth(TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }

        const auto leftSubtreeHeight {maxDepth(node->leftNode)};
        const auto rightSubtreeHeight {maxDepth(node->rightNode)};

        return std::max(leftSubtreeHeight, rightSubtreeHeight) + 1;
    }
};
}