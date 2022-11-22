class Solution {
public:
    int totalways(int n,vector<int> &dp){
        if(n<1 || n==1){
            return 1;
        }
            if(dp[n]!=-1) return dp[n];
        return dp[n] = totalways(n-1,dp)+totalways(n-2,dp);
    }
    
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return totalways(n,dp);
        
    }
};