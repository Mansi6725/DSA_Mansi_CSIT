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
    
void construct(vector<int>& nums,TreeNode* root,int l,int h){
        if(l>h) return;
        int mid=(l+h)/2;
        TreeNode* node=new TreeNode(nums[mid]);
        if(nums[mid]<root->val){
            root->left=node;
            construct(nums,root->left,l,mid-1);
            construct(nums,root->left,mid+1,h);
        }
        else if(nums[mid]>root->val){
            root->right=node;
            construct(nums,root->right,l,mid-1);
            construct(nums,root->right,mid+1,h);
        }      
        
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        int mid=n/2;
        TreeNode* root=new TreeNode(nums[mid]);
        construct(nums,root,0,mid-1);
        construct(nums,root,mid +1,n-1);
        return root;
    }
};