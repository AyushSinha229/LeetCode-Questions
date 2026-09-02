class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();

        int max_profit = 0;
        int mini = arr[0];
        for(int i = 1 ; i < n ; i++){
            max_profit = max(max_profit, arr[i] - mini);
            if(arr[i] < mini){
                mini = arr[i];
            }

        }

        return max_profit;
    }
};