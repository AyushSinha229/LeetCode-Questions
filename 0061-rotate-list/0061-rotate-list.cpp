class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || head->next == NULL || k == 0)
            return head;

        int len = 1;
        ListNode* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
            len++;
        }

        k = k % len;

        if (k == 0)
            return head;

        temp->next = head;

        int tail = len - k;

        ListNode* newtail = head;

        for (int i = 1; i < tail; i++) {
            newtail = newtail->next;
        }

        ListNode* newhead = newtail->next;

        newtail->next = NULL;

        return newhead;
    }
};