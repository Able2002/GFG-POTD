class Solution
{
    public:
    int M = 1e9+7;
    int solve(string &s,string &t,int i,int j,vector<vector<int>>&dp){
        //returns the number of subsequece that has jth char at ith char
        if(j<0){
            return 0;
        }
        if(i<0){
            return 0;
        }
        
        if(dp[j][i]!=-1){
            return dp[j][i];
        }
        
        if(s[i]==t[j]){
            int ans = 0;
            if(j==0){
                return 1;
            }
            for(int k=0;k<i;k++){
                ans = (ans%M + solve(s,t,k,j-1,dp)%M)%M;
            }
            return dp[j][i] = ans;
        }
        else{
            return dp[j][i] = 0;
        }
    }
    int subsequenceCount(string s, string t)
    {
      if(t.size()>s.size()){
          return 0;
      }
      vector<vector<int>>dp(t.size()+1,vector<int>(s.size()+1,-1));
      int ans = 0;
      for(int i=0;i<s.size();i++){
          ans = (ans%M + solve(s,t,i,t.size()-1,dp)%M)%M;
      }
      return ans;
    }
};
