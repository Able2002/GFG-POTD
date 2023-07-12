class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) mp[arr[i]]++;
        unordered_set<int> st;
        for(auto i : mp) st.insert(i.second);
        return mp.size() == st.size();
    }
};
