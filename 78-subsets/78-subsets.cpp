class Solution {
    private:
    void sub(int i,vector<vector<int>> &ans,vector<int> output,vector<int> nums){
        if(i>=nums.size()){
            ans.push_back(output);
            return;
        }
        output.push_back(nums[i]);
        sub(i+1,ans,output,nums);
        output.pop_back();
        sub(i+1,ans,output,nums);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        
        sub(0,ans,output,nums);
        return ans;
    }
};