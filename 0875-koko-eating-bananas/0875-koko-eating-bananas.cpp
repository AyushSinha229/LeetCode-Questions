class Solution {
public:
    long long time(vector<int>& piles, int mid) {

        long long sum = 0;

        for (int i = 0; i < piles.size(); i++) {
            sum += ((long long)piles[i] + mid - 1) / mid;
        }

        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int maxi = INT_MIN;

        for (auto x : piles) {
            maxi = max(maxi, x);
        }

        int low = 1, high = maxi;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            long long timereq = time(piles, mid);

            if (timereq <= h)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};