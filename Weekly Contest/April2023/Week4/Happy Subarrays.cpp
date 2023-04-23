class Solution {
  public:
  const int MOD = 1e9 + 7;
    const int MAXN = 2e5 + 5;
    int happySub(int n, vector<int> &arr) {
        // code here
        int ans = 0;
    unordered_map<int, int> freq;
    int prefix = 0;
    for (int i = 0; i < n; i++) {
        prefix ^= arr[i];
        ans = (ans + freq[prefix]) % MOD;
        if (prefix == 0) ans = (ans + 1) % MOD;
        freq[prefix]++;
    }
    return ans;
    }
};
