class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {

        int n = arr.size();
        vector<int> sum(n);
        int s = 0;
        for(int i = 0 ; i < n; i++){
            s += arr[i];
            sum[i] = s;
        
        }
        return sum;
        
    }
};