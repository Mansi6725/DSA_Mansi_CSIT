class Solution {
private:
    int solve(vector<int>& nums,vector<int>& dp,int n){
        // if(n<0)
        //     return 0;
        if(n==0)
            return 0;
        if(n<0)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        dp[n]=max(solve(nums,dp,n-1),solve(nums,dp,n-2)+nums[n]);
        return dp[n];
    }
    int solveTab(vector<int>& nums){
        vector<int> dp(nums.size(),-1);
        dp[0]=0;
        dp[1]=nums[1];
        for(int i=2;i<nums.size();i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
      
        return dp[nums.size()-1];
    }
     int solveSpace(vector<int>& nums){
        
        int prev2=0;
        int prev1=nums[1];
        for(int i=2;i<nums.size();i++)
        {
            int curr=max(prev1,prev2+nums[i]);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
public:
    int deleteAndEarn(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        vector<int> nums2(maxi+1);
        for(int i=0;i<nums.size();i++){
            nums2[nums[i]]+=nums[i];
        }
        vector<int> dp(maxi+1,-1);
        // return solve(nums2,dp,maxi);
        // return solveTab(nums2);
        return solveSpace(nums2);
    }
};