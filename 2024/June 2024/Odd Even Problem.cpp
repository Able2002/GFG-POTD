class Solution {
  public:
    string oddEven(string& s) {
        // code here
        vector<int> freq(26,0);
        int x = 0, y=0;
        for(char c : s)
            freq[c-'a']++;
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                if(i%2==0 and freq[i]%2!=0)
                     y++;
                if(i%2!=0 and freq[i]%2==0)
                     x++;
            }
        }
        if((x+y)&1)
            return("ODD");
        return("EVEN");
    }
};
