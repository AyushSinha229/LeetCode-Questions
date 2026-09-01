class Solution {
public:
    int majorityElement(vector<int>& arr) {
        

        int n = arr.size();
        map<int,int> mpp;

        for(auto x : arr){
            mpp[x]++;
        }
        for(auto x : mpp){
            if(x.second > n/2){
                return x.first;
            }
        }

        return -1;
    }
};