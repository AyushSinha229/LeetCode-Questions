class Solution {
public:
    int singleNumber(vector<int>& arr) {

        int n = arr.size();

        map<int,int> hash;

        for(auto x : arr){
            hash[x]++;
        }
        for(auto x : hash){
            if(x.second == 1){
                return x.first;
            }
        }

        return -1;
        
    }
};