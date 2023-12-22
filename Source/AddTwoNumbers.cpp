struct ListNode {
public:
    int val;
    ListNode* next;

    ListNode() : val {0}, next {nullptr} {

    }

    ListNode(int x) : val {x}, next {nullptr} {

    }

    ListNode(int x, ListNode* next) : val {x}, next {next} {

    }
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto dummyNode {ListNode()};
        auto* resultLinkedList {&dummyNode};
        auto* firstLinkedList {l1};
        auto* secondLinkedList {l2};
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
