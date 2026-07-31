class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int cnt = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] >= nums[i + 1]) {
                cnt++;
                if (cnt > 1) return false;

                if (i > 0 && i < nums.size() - 2 &&
                    nums[i] >= nums[i + 2] &&
                    nums[i - 1] >= nums[i + 1])
                    return false;
            }
        }

        return true;
    }
};