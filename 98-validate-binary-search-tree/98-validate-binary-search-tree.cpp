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
private:
    void inorder(vector<int>& ans, TreeNode* root, int& res){
        if(!root)
            return;
        
        if(root->left)
            inorder(ans,root->left,res);
        
        if(!ans.empty() && ans.back()>=root->val){
            res = 1;
            return;
        }
        
        ans.push_back(root->val);
        
        if(root->right)
            inorder(ans,root->right,res);
        
    }
public:
    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        int res = 0;
        TreeNode* ptr = root;
        
        inorder(ans, ptr, res);
        
        if(res){
            return false;
        }
        
        return true;
        
    }
};