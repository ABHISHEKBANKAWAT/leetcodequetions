/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int nodeidx;
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()==NULL){
            return NULL;
        }
        nodeidx = 0;
        return bsthelper(preorder,INT_MIN,INT_MAX);
    }
    TreeNode * bsthelper(vector<int>&preorder,int start , int end){
        if(nodeidx == preorder.size() || preorder[nodeidx]<start || preorder[nodeidx]>end){
            return NULL;
        }
        int val  = preorder[nodeidx++];
        TreeNode * node = new TreeNode(val);
        node->left = bsthelper(preorder,start,val);
        node->right = bsthelper(preorder,val,end);
        return node;
    }
};