class Solution {
public:
    int removeDuplicates(vector<int>& arr) {

        if (arr.empty()) return 0;

        int k = 1;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[k - 1] != arr[i]) {
                arr[k] = arr[i];
                k++;
            }
        }

        return k;
    }
};