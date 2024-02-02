class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        bool neg=0;
        int n=s.length();
        int ans=0;
        for(int i=0; i<n; i++){
            if(i==0 && s[i]=='-'){
                neg=1;
                continue;
            }
            if(s[i]>='0' && s[i]<='9'){
                ans=(ans*10)+(s[i]-'0');
            }else return -1;
        }
        return neg?(-1)*ans:ans;
    }
};
