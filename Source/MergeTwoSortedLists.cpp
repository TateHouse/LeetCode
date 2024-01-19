namespace LeetCode {
struct ListNode final {
public:
    ListNode() noexcept: val {0} {

    }

    explicit ListNode(const int x) noexcept: val {x} {

    }

    ListNode(const int x, ListNode* next) noexcept: val {x}, next {next} {

    }

public:
    int val;
    ListNode* next {nullptr};
};

class Solution final {
public:
    [[maybe_unused]] static ListNode* mergeTwoSortedLinkedLists(ListNode* linkedListOne,
                                                                      ListNode* linkedListTwo) noexcept {
        auto dummyNode {ListNode()};
        auto* tailNode {&dummyNode};

        while (linkedListOne != nullptr && linkedListTwo != nullptr) {
            const auto& currentLinkedListOneValue {linkedListOne->val};
            const auto& currentLinkedListTwoValue {linkedListTwo->val};

            if (currentLinkedListOneValue < currentLinkedListTwoValue) {
                tailNode->next = linkedListOne;
                linkedListOne = linkedListOne->next;
            } else {
                tailNode->next = linkedListTwo;
                linkedListTwo = linkedListTwo->next;
            }

            tailNode = tailNode->next;
        }

        tailNode->next = linkedListOne != nullptr ? linkedListOne : linkedListTwo;

        return dummyNode.next;
    }
};
}