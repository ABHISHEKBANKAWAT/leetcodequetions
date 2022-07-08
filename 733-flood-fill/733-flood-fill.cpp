class Solution {
public:
    void helper(int i , int j , vector<vector<int>>& image,int oldcolor,int newcolor,int m , int n){
        if(i<0 || j<0 || i==n || j==m || image[i][j]!=oldcolor) return ;
        image[i][j] = newcolor;
        helper(i+1,j,image,oldcolor,newcolor,m,n);
        helper(i-1,j,image,oldcolor,newcolor,m,n);
        helper(i,j+1,image,oldcolor,newcolor,m,n);
        helper(i,j-1,image,oldcolor,newcolor,m,n);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldcolor = image[sr][sc];
        int n = image.size();
        int m = image[0].size();
        if(oldcolor == color ) return image;
        helper(sr,sc,image,oldcolor,color,m,n);
        return image;
    }
};