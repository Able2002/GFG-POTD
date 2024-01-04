class Solution {
  public:
    int smallestSubstring(string s) {
        int n = s.size() ;
        int i = 0 , j = 0 ; 
        int zero = 0 , one = 0 , two = 0 ; 
        int ans = INT_MAX; 
        while(j <= n){
            if(zero >= 1 && one >= 1 && two >= 1 ){
                ans = min(ans , j - i) ; 
                
                if(s[i] == '0') zero-- ; 
                if(s[i] == '1') one-- ;
                if(s[i] == '2') two-- ;
                
                i++ ; 
            }
            
            else{
                if(s[j] == '0') zero++ ; 
                if(s[j] == '1') one++ ;
                if(s[j] == '2') two++ ; 
                
                j++ ; 
            }
        }
        
        if(ans == INT_MAX) return -1 ; 
        return ans ; 
    }
};
