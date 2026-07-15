class Solution {
public:
    int maxSubArray(vector<int>& arr) {

        long long sum = 0;
        int maxi = INT_MIN;

        for(int i = 0; i < arr.size(); i++) {

            sum += arr[i];

            maxi = max(maxi, (int)sum);

            if(sum < 0)
                sum = 0;
        }

        return maxi;
    }
};