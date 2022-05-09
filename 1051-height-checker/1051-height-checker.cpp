class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> neww;
        int n = heights.size();
        for(int i = 0 ; i < n;i++){
            neww.push_back(heights[i]);
        }
       sort(heights.begin(),heights.end());
        int count = 0;
        for(int i = 0 ;i<n;i++){
            if(heights[i]!=neww[i]){
                count++;
            }
        }
        return count;
    }
};