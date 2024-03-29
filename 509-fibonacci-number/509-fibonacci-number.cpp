class Solution {
private:
    int solve(int n,vector<int> &dp){
        if(n==0)
            return 0;
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-2];
        return dp[n];
    }
public:
    int fib(int n) {
        vector<int> dp(n+1,-1);
     return solve(n,dp);
    }
};