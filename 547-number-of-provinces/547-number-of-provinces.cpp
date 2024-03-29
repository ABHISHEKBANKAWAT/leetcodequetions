class Solution {
public:
    void dfs(int node , vector<int> adjls[],vector<int> &vis){
        vis[node] = 1;
        for(auto it : adjls[node]){
            if(!vis[it]){
                dfs(it,adjls,vis);
            }
        }
    }
    
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int m = isConnected[0].size();
        vector<int> adjls[m];
        for(int i =0 ; i<n ;i++){
            for(int j = 0 ; j<m;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        vector<int>  vis(m+1,0);
        int count = 0;
        for(int i = 0 ; i<m;i++){
            if(!vis[i]){
                count++;
                dfs(i,adjls,vis);
            }
        }
        return count;
    }
};