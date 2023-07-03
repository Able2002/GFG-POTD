class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
          int ans = 0;
        int lt = 0;
        int rt = 0;
        long long curr = 1;
        while(rt<n){
                if(a[rt]>=k){
                    // ans+=(rt-lt);
                    lt = rt;
                    rt++;
                    lt++;
                    curr = 1;
                }
            
            else if(curr*a[rt]<k){
                curr = curr*a[rt];
                ans+=(rt-lt+1);
                rt++;
            }
            else{
                while(curr*a[rt]>=k){
                    curr = curr/a[lt];
                    lt++;
                    if(lt==rt){
                        curr = 1;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
