class Solution
{
    public:
    int countFractions(int n, int numerator[], int denominator[])
    {
         map<pair<int, int>, int> fractionCount;
        int ans = 0;
    
        for (int i = 0; i < n ; i++)
        {
            int x = numerator[i];
            int y = denominator[i];
            int gcd = __gcd(x, y);
            x /= gcd;
            y /= gcd;
            int want_x = y - x;
            int want_y = y;
    
            if (fractionCount.find({want_x, want_y}) != fractionCount.end())
                ans += fractionCount[{want_x, want_y}];
    
            fractionCount[{x, y}]++;
    
        }
        return ans;
    }
};
