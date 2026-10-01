class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {

        int n = arr.size();
        stack<int> st;
        vector<int> ans(n,-1);


        for(int index = 2*n - 1 ; index >= 0 ; index--){

            int i = index % n;
            while(!st.empty() && st.top() <= arr[i]){
                st.pop();
            }

            if(!st.empty() && st.top() > arr[i]){
                ans[i] = st.top();
            }

            st.push(arr[i]);
        }

        return ans;



        
        
    }
};