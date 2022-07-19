/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> result = new ArrayList<Integer>();
    if(root==null)
        return result;
    result=call(root,result);
 
    return result;
    }
    List<Integer> call(TreeNode root,List<Integer> result){
        if(root!=null){
            call(root.left,result);
            result.add(root.val);
            call(root.right,result);
        }
        return result;
    }
}