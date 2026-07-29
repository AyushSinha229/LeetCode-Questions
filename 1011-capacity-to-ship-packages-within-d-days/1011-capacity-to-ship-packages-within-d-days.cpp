class Solution {
public:
    int shipWithinDays(vector<int>& arr, int days) {
        int maxi = arr[0];
        int sum = 0;

        for (int i = 0; i < arr.size(); i++) {
            maxi = max(maxi, arr[i]);
            sum += arr[i];
        }

        int low = maxi, high = sum;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int load = 0;
            int day = 1;

            for (int x : arr) {
                if (load + x > mid) {
                    day++;
                    load = x;
                } else {
                    load += x;
                }
            }

            if (day <= days)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};