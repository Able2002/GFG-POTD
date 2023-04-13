class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius) {
        stack<pair<int,int>> st;
        for(int i=0;i<N;i++)
        {
            pair<int,int> p={color[i],radius[i]};
            if(!st.empty() && st.top()==p)
            {
                st.pop();
                continue;
            }
            st.push(p);
        }
        return st.size();
    }
};
