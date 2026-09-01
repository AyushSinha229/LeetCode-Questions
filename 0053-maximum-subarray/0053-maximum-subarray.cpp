class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        int maxi = INT_MIN;
        int sum = 0;
        for(auto x : arr){

            sum += x;

            maxi = max(sum, maxi);

            if(sum < 0){
                sum = 0;
            }
        }

        return maxi;
    }
};