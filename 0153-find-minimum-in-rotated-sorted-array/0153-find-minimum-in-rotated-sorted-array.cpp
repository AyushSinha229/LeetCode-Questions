class Solution {
public:
    int findMin(vector<int>& arr) {

        int low = 0;
        int high = arr.size() - 1;

        while(low < high) {

            int mid = low + (high - low) / 2;

            if(arr[mid] > arr[high]) {
                // Minimum is on the right
                low = mid + 1;
            }
            else if(arr[mid] < arr[high]) {
                // Minimum is at mid or on the left
                high = mid;
            }
            else {
                // arr[mid] == arr[high]
                // Can't determine the side
                high--;
            }
        }

        return arr[low];
    }
};