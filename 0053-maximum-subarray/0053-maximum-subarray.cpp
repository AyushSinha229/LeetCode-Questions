class Solution {
public:
    int maxSubArray(vector<int>& arr) {

        int sum = 0;
        int maxi = INT_MIN;

        for(int x : arr) {

            sum += x;
            maxi = max(maxi, sum);

            if(sum < 0)
                sum = 0;
        }

        return maxi;
    }
};