class Solution {
public:

    bool possible(vector<int>& arr, int day , int m, int k){
        int count = 0 , bloom = 0;

        for(auto x : arr){
            if(x <= day) count++;
            else{
                bloom += count/k;
                count = 0;;
            }
        }
        bloom += count / k;

        if(bloom >= m) return true;
        else return false;

    }
    int minDays(vector<int>& arr, int m, int k) {

        int mini = INT_MAX;
        int maxi = INT_MIN;

        for(auto x : arr){
            mini = min(mini,x);
            maxi = max(maxi,x);
        }
        int low = mini, high = maxi, ans = -1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(possible(arr, mid , m , k) == true){
                ans = mid;
                high = mid - 1;
                
            }else low = mid + 1;
        }

        return ans;
    }
};