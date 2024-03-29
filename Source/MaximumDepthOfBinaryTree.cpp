#include <algorithm>

namespace LeetCode {
struct TreeNode final {
public:
    TreeNode() noexcept: value {0} {

    }

    explicit TreeNode(const int x) noexcept: value {x} {

    }

    TreeNode(const int x, TreeNode* left, TreeNode* right) noexcept: value {x}, leftNode {left}, rightNode {right} {

    }

public:
    int value;
    TreeNode* leftNode {nullptr};
    TreeNode* rightNode {nullptr};
};

class Solution final {
public:
    [[maybe_unused]] static int getMaximumDepth(TreeNode* node) noexcept {
        if (node == nullptr) {
            return 0;
        }

        const auto leftSubtreeHeight {getMaximumDepth(node->leftNode)};
        const auto rightSubtreeHeight {getMaximumDepth(node->rightNode)};

        return std::max(leftSubtreeHeight, rightSubtreeHeight) + 1;
    }
};
}