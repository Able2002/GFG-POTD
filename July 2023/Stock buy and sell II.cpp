class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        int ans = 0;
        prices.push_back(0);
        int j=0;
        for(int i=0;i<n;i++){
            if(prices[i]>prices[i+1]){
                ans += prices[i]-prices[j];
                j = i+1;
            }
        }
        return ans;
    }
};
