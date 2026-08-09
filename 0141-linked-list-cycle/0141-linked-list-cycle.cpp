class Solution {
public:
    bool hasCycle(ListNode *head) {

        map<ListNode*, int> mpp;

        ListNode* temp = head;

        while (temp != nullptr) {

            if (mpp.find(temp) != mpp.end())
                return true;

            mpp[temp] = 1;

            temp = temp->next;
        }

        return false;
    }
};