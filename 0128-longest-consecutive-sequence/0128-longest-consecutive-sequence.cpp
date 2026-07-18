class Solution {
public:
    int longestConsecutive(vector<int>& arr) {

        set<int> st(arr.begin(), arr.end());

        int longest = 0;

        for (int num : st) {

            // Is this the start of a sequence?
            if (st.find(num - 1) == st.end()) {

                int current = num;
                int length = 1;

                while (st.find(current + 1) != st.end()) {
                    current++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};