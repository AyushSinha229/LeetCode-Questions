class Solution {
public:
    int smallestDivisor(vector<int>& arr, int th) {

        int maxi = arr[0];

        for(int x : arr){
            maxi = max(maxi, x);
        }

        int low = 1;
        int high = maxi;

        while(low <= high){
            int mid = low + (high - low) / 2;
            int sum = 0;

            for(auto x : arr) sum += (x + mid - 1) / mid;

            if(sum <= th) high = mid - 1;
            else low = mid + 1;
        }
        
        return low;
    }
};