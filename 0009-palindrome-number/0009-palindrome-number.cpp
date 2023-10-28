class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        int l=s.length();
        int p=0;
        while(p<=l/2-1){
            if(s[p]==s[l-p-1]){
                p++;
            }
            else{
                return false;
            }
        }
        return true;
    }
};