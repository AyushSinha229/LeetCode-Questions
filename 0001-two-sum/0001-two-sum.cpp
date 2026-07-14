class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();

        unordered_map<int,int> mp;

        for(int i = 0 ; i < n ; i++){

            int rem = target - arr[i];

            if(mp.find(rem) != mp.end()){
                return {mp[rem], i};
            }
            mp[arr[i]] = i;
        }

        return {};

        

    }
};