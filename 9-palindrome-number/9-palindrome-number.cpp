class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 ||(x/10 !=0 && x%10==0) ) return false;
        int last = 0;
        int n= 0;
        while(x>n){
            last = x%10;
            n = n*10+last;
            x = x/10;
        }
        return (x==n)||(x==n/10);   
    }
};