class Solution
{
public:
    unordered_set<string> st;
    bool solve(int idx, int n, string s,  vector<string> &dictionary)
    {
        if(idx==n)
        {
            return true;
        }
        
        if(st.find(s)!=st.end())
        {
            return true;
        }
        
        for(int l=0; l<n; l++)
        {
            string temp=s.substr(idx, l);
            if(st.find(temp) != st.end() && solve(idx+l, n, s, dictionary))
            {
                return true;
            }
        }
        return false;
    }
    int wordBreak(int n, string s, vector<string> &dictionary) {
        //code here
        int size=s.length();
        for(auto word: dictionary)
        {
            st.insert(word);
        }
        return solve(0,size, s, dictionary);
    }
};
//C++
//POTD Feb 20, 2024
