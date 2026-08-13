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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        int n = 0;

        while(temp != nullptr){
            temp = temp->next;
            n++;
        }
        temp = head;

        vector<int> arr(n);

        for(int i = 0 ; i < n ; i++){
            arr[i] = temp->val;
            temp = temp->next;
        }
        sort(arr.begin(), arr.end());
        temp = head;
        for(int i = 0 ; i < n ; i++){
            temp->val = arr[i];
            temp = temp->next;
        }

        return head;

    }
};