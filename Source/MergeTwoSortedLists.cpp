namespace LeetCode {
struct ListNode {
public:
    ListNode() : val {0} {

    }

    explicit ListNode(const int x) : val {x} {

    }

    ListNode(const int x, ListNode* next) : val {x}, next {next} {

    }

public:
    int val;
    ListNode* next {nullptr};
};

class Solution {
public:
    [[maybe_unused]] static const ListNode* mergeTwoLists(ListNode* linkedListOne, ListNode* linkedListTwo) {
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