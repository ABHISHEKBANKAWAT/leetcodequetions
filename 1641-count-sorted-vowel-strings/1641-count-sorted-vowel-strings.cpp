class Solution {
public:
    //bottom up
//   int countVowelStrings(int n) {
//         vector<vector<int>>dp(n + 1, vector<int>(6));
//         for (int i = 1; i <= n; ++i)
//             for (int k = 1; k <= 5; ++k)
//                 dp[i][k] = dp[i][k - 1] + (i > 1 ? dp[i - 1][k] : 1);
//         return dp[n][5];
//     }
// };

//Solution 01:
    //tc = O(n)
// class Solution {
// public:
//     int countVowelStrings(int n) {
//         int a=1, e=1, i=1, o=1, u=1;
        
//         while(--n){
//             o += u;
//             i += o;
//             e += i;
//             a += e;
//         }
        
//         return a+e+i+o+u;
//     }
// };
     int countVowelStrings(int n) {
        return (n + 1) * (n + 2) * (n + 3) * (n + 4) / 24;
    }
};