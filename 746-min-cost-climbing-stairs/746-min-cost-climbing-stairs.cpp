class Solution {
private:
    int solve(vector<int> &cost,vector<int> &dp,int n){
        if(n==0)
            return cost[0];
        if(n==1)
            return cost[1];
        if(dp[n]!=-1)
            return dp[n];
        dp[n]=cost[n]+min(solve(cost,dp,n-1),solve(cost,dp,n-2));
        return dp[n];
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(),-1);
         return min(solve(cost,dp,cost.size()-1),solve(cost,dp,cost.size()-2));
    }
};