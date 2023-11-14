class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        int n=s1.length();
        for(int i=0;i<n;i++)
        {
            if(s1==s2)
            {
                return 1;
            }
            char a=s1[n-1];
            string s=to_string(a);
            s1.pop_back();
            s1=a+s1;
        }
        return 0;
        
    }
};
