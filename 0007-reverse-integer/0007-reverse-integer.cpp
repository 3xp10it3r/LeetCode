class Solution {
public:
    int reverse(int x) {
        // bool neg = false;
        // if(x<0) neg = true;
        int rev = 0;
        while(x){
            int lastDigit = x%10;
            if(rev > INT_MAX/10 || (rev == INT_MAX/10 && lastDigit > INT_MAX%10) ) return 0;
            if(rev < INT_MIN/10 || (rev == INT_MIN/10 && lastDigit < INT_MIN%10) ) return 0;
            rev = rev*10 + lastDigit;
            x = x/10;
        }
        return rev;
    }
};