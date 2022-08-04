class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> rows;
        for(int i = 0 ; i<numRows;i++){
            vector<int> level(i+1,1);
            for(int j=1 ; j<i;j++){
                level[j] = rows[i-1][j]+rows[i-1][j-1];
            }
            rows.push_back(level);
        }
        return rows;
    }
};