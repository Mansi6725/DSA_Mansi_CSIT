class Solution {
public:
    int climbStairs(int n) {
       if(n<=2)
            return n;
        
        int dp[]={0,1,2};    
        for(int i=3;i<=n;i++)
        {
            //loGIC
            //DP[3%3]=DP[0] =DP[4%3]+DP[5%3]
            //DP[4%3]=DP[1] =DP[5%3]+DP[6%3];
            //hERe performing variables swap
            //with efficient use of static array and %operator
            
            dp[(i)%3]=dp[(i+1)%3]+dp[(i+2)%3];
        
        }
        
        return dp[n%3];
        
    }
};