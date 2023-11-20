class Solution{
  public:
    int solve(Node *root, int k, map<int,int> &s, int sum)
    {
        if(root == NULL)
            return 0;
        int c = 0;
        sum += root -> data;
        if(s.find(sum-k) != s.end())
            c += s[sum - k];
        s[sum]++;
        int left = solve(root -> left, k, s, sum);
        int right = solve(root -> right, k, s, sum);
        s[sum]--;
        return c + left + right;
    }
    int sumK(Node *root,int k)
    {
       
        map<int,int> s;
        s[0]++;
        return solve(root, k, s, 0);
    }
};
