class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {

        vector<int> st;

        for(int i = 0; i < arr.size(); i++) {

            // Positive asteroid -> directly push
            if(arr[i] > 0) {
                st.push_back(arr[i]);
            }

            // Negative asteroid
            else {

                // Destroy all smaller positive asteroids
                while(!st.empty() && st.back() > 0 &&
                      st.back() < abs(arr[i])) {
                    st.pop_back();
                }

                // Equal size -> both destroy
                if(!st.empty() && st.back() == abs(arr[i])) {
                    st.pop_back();
                }

                // No collision possible -> current asteroid survives
                else if(st.empty() || st.back() < 0) {
                    st.push_back(arr[i]);
                }
            }
        }

        return st;
    }
};