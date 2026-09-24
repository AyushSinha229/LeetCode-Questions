class Solution {
public:

    long long thour(vector<int>& arr, int mid) {
        long long sum = 0;

        for (auto x : arr) {
            sum += ((long long)x + mid - 1) / mid;
        }

        return sum;
    }

    int minEatingSpeed(vector<int>& arr, int h) {
        int maxi = INT_MIN;

        for (auto x : arr) {
            maxi = max(maxi, x);
        }

        int low = 1, high = maxi;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long hour = thour(arr, mid);

            if (hour <= h)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};