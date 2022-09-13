class Solution {
public:
    int reverse(int x) {
        int n=0;
        while(x){
            if(n>INT_MAX/10 || n<INT_MIN/10){
                return 0;
            }else{
            n = n * 10+ x%10;
            x = x/10;
            }
        }
        return n;
    }
};