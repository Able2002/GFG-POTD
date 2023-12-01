class Solution{
    private:
    void solve(Node*root,bool&ans,unordered_map<int,bool>&mp)
    {
        if(!root) return;
        
        mp[root->data]=true;
        if(root->left==NULL && root->right==NULL)
        {
            //means we are at leaf node
            int xp1=root->data+1;
            int xm1=root->data-1==0?root->data:root->data-1;
            
            if(mp.find(xp1)!=mp.end() && mp.find(xm1)!=mp.end())
            {
                //means both are already present
                ans=true;
                return;
            }
            
        }
        //otherwise do the recursive calls to left and right
        solve(root->left,ans,mp);
        solve(root->right,ans,mp);
        
    }
  public:
    bool isDeadEnd(Node *root)
    {
        bool ans=false;
        unordered_map<int,bool>mp; //this map is to keep track of nodes inserted till now
        solve(root,ans,mp);
        return ans;
    }
};

