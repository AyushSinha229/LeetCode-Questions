/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;

        while(temp != nullptr){
            temp = temp->next;
            count++;
        }
        int move = count - n;
        if(move == 0) {
            return head->next;
        }
        temp = head;

        for(int i = 1; i < move; i++) {
            temp = temp->next;
        }

        ListNode* del = temp->next;
        temp->next = temp->next->next;

        delete del;

        return head;
    }
};