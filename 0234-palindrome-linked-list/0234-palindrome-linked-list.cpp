class Solution {
public:

    ListNode* reverseList(ListNode* head) {

        if(head == nullptr || head->next == nullptr)
            return head;

        ListNode* newhead = reverseList(head->next);

        head->next->next = head;
        head->next = nullptr;

        return newhead;
    }

    bool isPalindrome(ListNode* head) {

        if(head == nullptr || head->next == nullptr)
            return true;

        // Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        ListNode* head2 = reverseList(slow);

        // Compare
        ListNode* first = head;
        ListNode* second = head2;

        while(second != nullptr) {

            if(first->val != second->val) {
                reverseList(head2);
                return false;
            }

            first = first->next;
            second = second->next;
        }

        // Restore
        reverseList(head2);

        return true;
    }
};