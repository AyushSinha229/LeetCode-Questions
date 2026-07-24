class Solution {
public:
    int findMin(vector<int>& arr) {

        sort(arr.begin(),arr.end());

        int mini = arr[arr.size() - 1];

        for(int i = 0 ; i < arr.size(); i++){
            mini = min(mini,arr[i]);          
        }

        return mini;
        
    }
};