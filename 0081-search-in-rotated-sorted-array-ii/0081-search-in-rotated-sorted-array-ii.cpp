class Solution {
public:
    bool search(vector<int>& arr, int target) {

        int low = 0, high = arr.size() - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            // Found target
            if (arr[mid] == target)
                return true;

            // Duplicates: cannot determine sorted half
            if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
                low++;
                high--;
                continue;
            }

            // Left half is sorted
            if (arr[low] <= arr[mid]) {

                // Target lies inside left sorted half
                if (arr[low] <= target && target < arr[mid]) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }

            // Right half is sorted
            else {

                // Target lies inside right sorted half
                if (arr[mid] < target && target <= arr[high]) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }

        return false;
    }
};