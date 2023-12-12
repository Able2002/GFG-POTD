class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
         vector<vector<int>> dp(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            dp[i][0] = M[i][0];
        }

        int ans = 0;
        for (int j = 1; j < m; j++) {
            for (int i = 0; i < n; i++) {
                int sum = 0, sum1 = 0, sum2 = 0;

                if (i > 0) {
                    sum = dp[i - 1][j - 1];
                }

                sum1 = dp[i][j - 1];

                if (i < n - 1) {
                    sum2 = dp[i + 1][j - 1];
                }

                dp[i][j] = M[i][j] + max(sum, max(sum1, sum2));
                ans = max(ans, dp[i][j]);
            }
        }

        return ans;
    }
};
