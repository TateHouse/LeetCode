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
    [[maybe_unused]] static const ListNode* getLinkedListSum(ListNode* linkedListOne, ListNode* linkedListTwo) {
        auto dummyNode {ListNode()};
        auto* resultLinkedList {&dummyNode};
        auto* firstLinkedList {linkedListOne};
        auto* secondLinkedList {linkedListTwo};
        auto carry {0};

        while (firstLinkedList != nullptr || secondLinkedList != nullptr) {
            auto firstValue {0};
            auto secondValue {0};

            if (firstLinkedList != nullptr) {
                firstValue = firstLinkedList->val;
                firstLinkedList = firstLinkedList->next;
            }

            if (secondLinkedList != nullptr) {
                secondValue = secondLinkedList->val;
                secondLinkedList = secondLinkedList->next;
            }

            const auto sum {firstValue + secondValue + carry};
            carry = sum / 10;

            resultLinkedList->next = new ListNode(sum % 10);
            resultLinkedList = resultLinkedList->next;
        }

        if (carry > 0) {
            resultLinkedList->next = new ListNode(carry);
        }

        return dummyNode.next;
    }
};
}