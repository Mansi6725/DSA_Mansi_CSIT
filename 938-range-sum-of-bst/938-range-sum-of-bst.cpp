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
int helper(TreeNode* root, int low, int high,int& sum ){
    
    if(root == NULL){
        return 0;
    }
    if(root->val <= high && root->val>=low){
        sum = sum+root->val;
    }
    helper(root->left,low,high,sum);
    helper(root->right,low,high,sum);
    
    return sum;
    
}
int rangeSumBST(TreeNode* root, int low, int high) {
    
       int ans = 0;
       return helper(root,low,high,ans);
    
}
};