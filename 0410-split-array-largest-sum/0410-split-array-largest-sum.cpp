class Solution {
public:

    bool possible(vector<int>& arr, int m , int k){

        int count = 1, pages = 0;

        for(int i = 0 ; i < arr.size() ; i++){
            if(pages + arr[i] > m){
                count++;
                pages = arr[i];
            }else pages += arr[i];
        }

        return count <= k;
    }
    int splitArray(vector<int>& arr, int k) {

        int low = *max_element(arr.begin(), arr.end());
        int high = 0;
        for(auto x : arr){
            high += x;
        }
        int ans =high;
        while(low <= high){
            int mid = low +(high - low)/2;

            if(possible(arr,mid,k)){
                ans = mid; 
                high = mid - 1;
            }else low = mid + 1;
        }

        return ans;

    }
};