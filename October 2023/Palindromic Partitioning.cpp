class Solution{
public:

    bool isPalindrome(string &s, int i, int j){
        while(i<j){
            if(s[i++]!=s[j--]){
                return false;
            }
        }
        return true;
    }
    
    int palindromicPartition(string str)
    {
       int n = str.size();
        vector<int> dp(n+1, 0);
        for(int i=n-1;i>=0;i--){
            int mini = INT_MAX;
            for(int j=i;j<n;j++){
                if(isPalindrome(str, i, j)){
                    int partition = 1+ dp[j+1];
                    mini = min(mini, partition);
                }
            }
            dp[i] = mini;
        }
        return dp[0] - 1;
    }
};
