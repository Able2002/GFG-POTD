class Solution
{

public:
    int xmod11(string x)
    {
       // code here
       int fs = 0, ss = 0;
       for(int i = 0;i<x.size();i+=2)fs+=x[i] - '0';
       for(int i = 1;i<x.size();i+=2)ss+=x[i] - '0';
       return (ss-fs)%11 >= 0? (ss-fs)%11 : (ss-fs)%11 + 11;
    
    }
};
