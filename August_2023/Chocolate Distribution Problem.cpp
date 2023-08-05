class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
         sort(a.begin(), a.end());
         
         int i=0;
         int j=m-1;
         long long ans = 1e9;
         while(j<n){
             ans  = min(ans, a[j]-a[i]);
             i++;
             j++;
         }
         return ans;
    }   
};
