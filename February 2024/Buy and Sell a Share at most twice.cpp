class Solution
{
    public:
        //User function Template for C++
        
        int maxProfit(vector<int> &price){
            int n=price.size();
            vector<int> dp(n,0);   
            int ma=price[n-1];
            for(int i=n-2;i>=0;i--){
                dp[i]=max(dp[i+1],ma-price[i]);
                ma=max(ma,price[i]);
                
            } 
            int mi=price[0];
            for(int i=1;i<n;i++){
                dp[i]=max(dp[i-1],dp[i]+price[i]-mi);
                mi=min(mi,price[i]);
                
            } 
             
             return(dp[n-1]);  
               
        }
};
