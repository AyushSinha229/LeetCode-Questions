class Solution {
public:

    bool possible(vector<int>& arr, int limit, int d){
        long long sum = 0;

        for(auto x : arr){
            sum += ceil((double)x / d);
        }
        if(sum > limit){
            return false;
        }
        return sum <= limit;
    }
    int smallestDivisor(vector<int>& arr, int limit) {
        
        int low = 1;
        int high = *max_element(arr.begin(), arr.end());
        int ans = -1;

        while(low <= high){

        int mid = (low + high) /2;

        if(possible(arr,limit,mid)){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }

        
    }
        return ans;
    }
};