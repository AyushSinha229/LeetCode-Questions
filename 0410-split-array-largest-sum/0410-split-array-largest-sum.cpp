class Solution {
public:

    bool ispossible(vector<int>& arr,int maxSum, int k){
        int pages = 0, allocated = 1;

        for(int i = 0 ; i < arr.size(); i++){

            if(arr[i] > maxSum) return false;

            if(arr[i] + pages > maxSum){
                allocated += 1;
                pages = arr[i];
            }else pages += arr[i];
        }
        return allocated <= k;
    }
    int splitArray(vector<int>& arr, int k) {

        int low = *max_element(arr.begin(), arr.end());
        int high = 0;

        for (int x : arr)
            high += x;

        int ans = high;

        while(low <= high){

            int mid = low + (high - low)/ 2;

            if(ispossible(arr, mid , k)){
                ans = mid;
                high = mid - 1;
            }else low = mid + 1;
        }

        return ans;
        
    }
};