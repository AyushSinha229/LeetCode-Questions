class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();

        vector<int> ans(n,-1);
        stack<int> st;
        map<int,int> mpp;


        for(int i = m - 1; i >= 0 ; i--){

            while(!st.empty() && st.top() <= arr2[i]){
                st.pop();
            }
            if(st.empty()) {
                mpp[arr2[i]] = -1;
            }
            else {
                mpp[arr2[i]] = st.top();
            }

            st.push(arr2[i]);
        }
        for(int i = 0; i < n; i++) {
            ans[i] = mpp[arr1[i]];
        }

        return ans;



        


    }
};