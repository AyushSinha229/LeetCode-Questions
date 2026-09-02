class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();

        // 1. Find pivot
        int pivot = -1;

        for(int i = n - 2; i >= 0; i--) {
            if(arr[i] < arr[i + 1]) {
                pivot = i;
                break;
            }
        }

        // 2. If no pivot, this is the largest permutation
        if(pivot == -1) {
            reverse(arr.begin(), arr.end());
            return;
        }

        // 3. Find the first element from right greater than pivot
        for(int i = n - 1; i > pivot; i--) {
            if(arr[i] > arr[pivot]) {
                swap(arr[i], arr[pivot]);
                break;
            }
        }

        // 4. Reverse the part after pivot
        reverse(arr.begin() + pivot + 1, arr.end());
    }
};