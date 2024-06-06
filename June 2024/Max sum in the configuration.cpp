class Solution {
  public:
    long long max_sum(int a[], int n) {
        long long sum = 0, org = 0;
        for(int i=0; i<n; i++) {
            sum += a[i];
            org += i * 1LL * a[i];
        }
        
        long long ans = org;
        
        for(int i=n-1; i>=0; i--) {
            org += sum - (1LL * a[i] * n);
            ans = max(ans, org);
        }
        
        return ans;
    }
};
