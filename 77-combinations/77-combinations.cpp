class Solution {
private:
    void solve(int index,vector<vector<int>> &ans,vector<int> &temp, vector<int> nums,int k){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        if(index>=nums.size())
            return;
        for(int i=index;i<nums.size();i++){
            temp.push_back(nums[i]);
            solve(i+1,ans,temp,nums,k);
            temp.pop_back();
        }
    }
    
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums(n);
        for(int i=0;i<n;i++)
            nums[i]=i+1; 
        vector<vector<int>> ans;
        vector<int> temp;
        int index=0;
        solve(index,ans,temp,nums,k);
        return ans;
    }
};