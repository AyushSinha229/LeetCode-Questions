class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
       int pindex = 0;
       int nindex = 1;
       int n = arr.size();
       vector<int> ans(n);

       for(auto x : arr){
        if(x >= 0){
            ans[pindex] = x;
            pindex += 2;
        }else{
            ans[nindex] = x;
            nindex += 2;
        }
       }

       return ans;
    }
};