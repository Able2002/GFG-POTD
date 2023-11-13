//User function template for C++

    //Function to find length of shortest common supersequence of two strings.

class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        vector<int> dp(n+1) ;
        
        for(int i=0;i<=n;i++)
        dp[i] = i ;
        
        int prev = 0 ;
        for(int i=1;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(j==0)
                {
                prev = dp[j] ;
                dp[j] = dp[j]+1;
                continue;
                }
                
                int cur = dp[j] ;
                
                if(X[i-1] == Y[j-1])
                    dp[j] = min(1+prev,1+min(dp[j-1],dp[j])) ;
                else
                    dp[j] = 1+min(dp[j-1],dp[j]) ;
                    
                prev = cur ;
                
            }
            
        }
        
        return dp[n] ;
    }
};
//CPP
//13 NOV GFG
