class Solution
{
public:
int  countSetBit(int n){
    int ans=0;
    while(n){
        if(n&1) ans++;
        n/=2;
    }
return ans;
}
    int is_bleak(int n)
    {
        int j=1;
        while((1<<j)< n) j++;
        
        for(int i=n-j;i<n;i++){
          if(countSetBit(i)+i==n) return 0;
        }  
      return 1;
    }
};

//C++
//POTD SOLUTION(GFG)
//28 Oct 2023
