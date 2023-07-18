class Solution{
  public:
  
    int longestPalinSubseq(string A) {
        
        string B=A;
        reverse(B.begin(),B.end());
        int n=A.length();
        
        vector<int> pre(n+1,0);
        
        for(int i=1;i<=n;i++)
        {
            vector<int> curr(n+1,0);
            for(int j=1;j<=n;j++)
            {
                if(A[i-1]==B[j-1])
                curr[j]=1+pre[j-1];
                else
                {
                    int a=pre[j];
                    int b=curr[j-1];
                    
                    curr[j]=max(a,b);
                }
            }
            pre=curr;
        }
        
        return pre[n];
    }
};
