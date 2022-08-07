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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root==nullptr) return result;
        stack<TreeNode*> st;
        st.push(root);
        
        while(!st.empty())
        {
            TreeNode *temp = st.top();
            st.pop();
            result.push_back(temp->val);
            // right child in the bottom (stack FIFO)
            if(temp->right)
                st.push(temp->right);
            // left child in the top for Preorder
            if(temp->left)
                st.push(temp->left);
        }
        return result;
    }
    
    
   vector<int> solution2(TreeNode* root) {
        vector<int> result;
        visiTree(root, result);
        return result;
    }
    
    void visiTree(TreeNode *root, vector<int> &v){
        // 1) if node is null, return;
        if(root == nullptr) return;
        
        // 2) visit left , output the val, then visit right; 
        v.push_back(root->val);
        visiTree(root->left, v);
        visiTree(root->right, v);
    }
};