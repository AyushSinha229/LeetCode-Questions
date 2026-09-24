class Solution {
public:
    int capacity(vector<int>& arr, int mid, int days) {

        int load = 0, day = 1;
        for (auto x : arr) {
            if (load + x > mid) {
                day++;
                load = x;
            } else {
                load += x;
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& arr, int days) {

        int n = arr.size();

        int maxi = INT_MIN;
        int sum = 0;
        for (auto x : arr) {
            maxi = max(maxi, x);
            sum += x;
        }

        int low = maxi, high = sum;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int maxc = capacity(arr, mid, days);

            if (maxc <= days)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};