class Solution {
  public:
    long long maximumSum(int n, vector<int> &A) {
        // code here
        long long ans = 0;
        sort(A.begin(), A.end());
        for(int i = 0; i<n; i++)
            ans += (long)(i+1)*A[i];
        return ans;
    }
};
