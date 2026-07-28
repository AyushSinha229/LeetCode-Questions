class Solution {
public:
    long long hour(vector<int>& arr, int speed) {
        long long thour = 0;

        for (int j = 0; j < arr.size(); j++) {
            thour += (arr[j] + speed - 1) / speed;
        }

        return thour;
    }

    int minEatingSpeed(vector<int>& arr, int h) {

        int high = 0;
        for (int x : arr)
            high = max(high, x);

        int low = 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long t = hour(arr, mid);

            if (t <= h)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};