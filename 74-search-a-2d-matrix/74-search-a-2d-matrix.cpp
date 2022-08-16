class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;
        int n = matrix.size();
        int m = matrix[0].size();
        int i = 0;
        int j = (n*m)-1;
        while(i<=j){
            int mid = (i+(j-i)/2);
            if(matrix[mid/m][mid%m]==target){
                return true;
            }
            if(matrix[mid/m][mid%m]<target){
             i = mid+1;   
            }else{
                j = mid-1;
            }
        }
        return false;
    }
};