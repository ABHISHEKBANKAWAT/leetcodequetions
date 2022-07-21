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
public:
    int leftHeight(TreeNode * node){
        int height = 0;
        while(node){
            height++;
            node = node->left;
        }
        return height;
    }
    int rightHeight(TreeNode * node){
        int height = 0;
        while(node){
            height++;
            node = node->right;
        }
        return height;
    }
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int lh = leftHeight(root);
        int rh = rightHeight(root);
        if(lh==rh) pow(2,lh)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};