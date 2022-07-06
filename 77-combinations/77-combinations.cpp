class Solution {
public:
    void helper(int i,int n,int k,vector<int> &subset,vector<vector<int>> &ans)
    {   if(i>n){
        if(k==0){
            ans.push_back(subset);
        }
        return;
    }
        subset.push_back(i);
        helper(i+1,n,k-1,subset,ans);
        
        subset.pop_back();
        helper(i+1,n,k,subset,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> subset;
        vector<vector<int>> ans;
        helper(1,n,k,subset,ans);
        return ans;
    }
};