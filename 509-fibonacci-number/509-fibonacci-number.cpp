class Solution {
public:
    int helper(int n)
    {   int sum=0;
        if(n==0)
        {
            return 0;
        }
        if(n==1){
            return 1;
        }
       return sum = helper(n-1)+helper(n-2);
    }
    int fib(int n) {
        return helper(n);
    }
};