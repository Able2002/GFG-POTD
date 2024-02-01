class Solution
{
  public:
    //Function to check if a string is Pangram or not.
     bool checkPangram (string s) {
        // your code here
        vector<bool> alphabet(26,false);
    
        for(int i = 0; i < s.size(); i++) {
            
            if(s[i] >= 'A' && s[i] <= 'Z') {
                
                char lowercase = (s[i]^(1 << 5));
                int index = lowercase - 'a';
                alphabet[index] = true;
            } else if(s[i] >= 'a' && s[i] <= 'z') {
                 
                int index = s[i]-'a';
                alphabet[index] = true;
        
            }
            
            
        }
        
        for(int i = 0; i < 26; i++) {
            if(!alphabet[i])
                return false;
        }   
        return true;
        
    }

};
