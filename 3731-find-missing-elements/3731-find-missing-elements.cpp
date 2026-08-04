class Solution {
public:
    vector<int> findMissingElements(vector<int>& arr) {

        int n = arr.size();
        vector<int> ans;
        int low = *min_element(arr.begin(), arr.end());
        int high = *max_element(arr.begin(), arr.end()); 

        for(int i = low ; i < high ; i++){

            if(find(arr.begin(), arr.end(), i) == arr.end()){
                ans.push_back(i);
            }
        }

        return ans;

        
    }
};