class Solution {
public:
    int singleNumber(vector<int>& arr) {
        map<int,int>mpp;

        int n = arr.size();

        for(int i = 0 ; i < n ; i++){
            mpp[arr[i]]++;
        }

        for (auto it : mpp) {
            if (it.second == 1) {
                return it.first;
            }
        }

        return -1;
    }
};