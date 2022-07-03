class Solution {
public:
    double myPow(double x, long n) {
         if(n<0)
        {
            x=1/x;
            n=-n;
        }
        if(x==1)return 1; 
        if(n==0) return 1;
        if(n==1) return x;
        double partialAns = myPow(x,n/2);
        if(n%2==1) return partialAns*partialAns*x;
        return partialAns*partialAns;
    }
};