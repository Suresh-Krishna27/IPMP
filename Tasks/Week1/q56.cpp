//https://leetcode.com/problems/palindrome-number/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x==0) return true;
        long temp,k,a,r=0;
        a=x;
        while(a>0){
            k=a%10;
            r=r*10+k;
            a=a/10;
        }
        if(r==x){
                return true;
        }
        return false;

    }
};
