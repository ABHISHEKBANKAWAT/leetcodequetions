/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Codec {

    // Encodes a tree to a single string.
    public String serialize(TreeNode root) {
        if(root==null){
            return "x";
        }
        String leftSerialized = serialize(root.left);
        String rightSerialized = serialize(root.right);
        return root.val+","+leftSerialized+","+rightSerialized;
        
    }

    // Decodes your encoded data to tree.
    public TreeNode deserialize(String data) {
        Queue<String> nodesleft = new  LinkedList<>();
        nodesleft.addAll(Arrays.asList(data.split(",")));
        return helper(nodesleft);
        }
    private TreeNode helper(Queue<String> nodesleft){
        String valueForNode = nodesleft.poll();
        if(valueForNode.equals("x")) return null;
        TreeNode newNode = new TreeNode(Integer.valueOf(valueForNode));
        newNode.left = helper(nodesleft);
        newNode.right = helper(nodesleft);
        return newNode;
                              
    }
        
    }

// Your Codec object will be instantiated and called as such:
// Codec ser = new Codec();
// Codec deser = new Codec();
// TreeNode ans = deser.deserialize(ser.serialize(root));