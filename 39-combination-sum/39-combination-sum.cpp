class Solution {
private:
    void sub(int i,vector<int> &temp,vector<vector<int>> &ans,vector<int> candidates,int target){
        if(i>=candidates.size()){
        if(target==0){
                ans.push_back(temp);
           
        }
             return;
        }
        if(target-candidates[i]>=0){
            temp.push_back(candidates[i]);
            sub(i,temp,ans,candidates,target-candidates[i]);
            temp.pop_back();
        }
        sub(i+1,temp,ans,candidates,target);
        
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sub(0,temp,ans,candidates,target);
        return ans;
    }
};