class Solution {
public:
    int majorityElement(vector<int>& arr) {

        map<int,int> mp;

        for(int i = 0 ; i < arr.size() ; i++){
            mp[arr[i]]++;
        }

        for(auto x : mp){
            if(x.second > (arr.size()/2)){
                return x.first;
            }
        }
        return -1;
    }
};