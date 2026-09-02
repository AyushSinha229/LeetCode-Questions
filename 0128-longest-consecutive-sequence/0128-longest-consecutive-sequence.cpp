class Solution {
public:
    int longestConsecutive(vector<int>& arr) {

        int n = arr.size();

        unordered_set<int> st;

        for(auto x : arr){
            st.insert(x);
        }


        int longest = 0;

        // 2. Traverse the array
        for(auto x : st) {

            // 3. Check if x is the START of a sequence
            if(st.find(x - 1) == st.end()) {

                int current = x;
                int count = 1;

                // 4. Keep going while next number exists
                while(st.find(current+1) != st.end()) {

                    current++;
                    count++;
                }

                // 5. Update longest
                longest = max(longest, count);
            }
        }

        return longest;
    }
};