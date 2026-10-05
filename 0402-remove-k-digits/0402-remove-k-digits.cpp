class Solution {
public:
    string removeKdigits(string arr, int k) {
        
        stack<char> st;

        for(char x : arr) {
            
            while(!st.empty() && k > 0 && st.top() > x) {
                st.pop();
                k--;
            }
            
            st.push(x);
        }

        // If k is still remaining, remove from the end
        while(k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        string res = "";

        while(!st.empty()) {
            res += st.top();
            st.pop();
        }

        reverse(res.begin(), res.end());


        int i = 0;
        while(i < res.size() && res[i] == '0') {
            i++;
        }

        res = res.substr(i);

        if(res.empty())
            return "0";

        return res;
    }
};