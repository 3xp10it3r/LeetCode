class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int dup = x;
        long long rev = 0;
        while(dup){
            int d = dup%10;
            rev = rev*10 + d;
            dup = dup/10;
        }
        if(x == rev) return true;
        return false;
    }
};