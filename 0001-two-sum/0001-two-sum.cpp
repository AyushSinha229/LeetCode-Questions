class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        int n = arr.size();

        map<int, int> hash;

        for(int i = 0 ; i < n ;i++){

            int sum = arr[i];

            if(hash.find(target - sum) != hash.end()){
                return {hash[target - sum],i};
            }else{
                hash[sum] = i;
            }
        }
        return {};
        
    }
};