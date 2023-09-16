class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        long long mod = 1000000007;
        vector<long long> dp(n+1, 0);
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        
        for(long long i=3;i<=n;i++){
            dp[i] = (dp[i-1]+dp[i-2]+dp[i-3])%mod;
        }
        return dp[n]%mod;
    }
};
