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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int count = 0;

        if(head == nullptr || head->next == nullptr)
           return nullptr;
        while(temp != nullptr){
            temp = temp -> next;
            count++;
        }
        temp = head;
        for(int i = 1; i < count/2 ; i++){
            temp = temp -> next;
        }
        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete del;
        return head;
    }
};