class Solution{
public:
    long long sequence(int n){
         long mod=1000000007;
        long sum=0;
        long count=1;
        for(int i=1;i<=n;i++){
            long mul=1;
            for(int j=1;j<=i;j++){
                mul=(mul*count)%mod;
                count++;
            }
            sum=(sum+mul)%mod;
        }
        return sum%mod;
    }
};
