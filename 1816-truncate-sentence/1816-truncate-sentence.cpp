class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        int count = 0;

        for (char c : s) {
            if (c == ' ') {
                count++;

                if (count == k)
                    break;
            }

            ans += c;
        }

        return ans;
    }
};