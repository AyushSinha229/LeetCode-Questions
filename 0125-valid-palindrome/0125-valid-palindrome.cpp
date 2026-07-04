class Solution {
public:
    bool check(string &s, int left, int right){

        if(left >= right) return true;

        if(s[left] != s[right]) return false;

        return check(s, left + 1, right - 1);
    }

    bool isPalindrome(string s){

        string t = "";
        for(char ch : s){
            if(isalnum(ch)){
                t += tolower(ch);
            }
        }

        return check(t, 0, t.size() - 1);
    }
};