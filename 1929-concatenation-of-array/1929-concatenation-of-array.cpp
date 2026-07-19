class Solution {
public:
    vector<int> getConcatenation(vector<int>& arr) {

        int n = arr.size();

        vector<int> ans(2*n);

        for(int i = 0 ; i < n ; i++){
            ans[i] = arr[i];
            ans[n + i] = arr[i];
        }


        return ans;
        
    }
};