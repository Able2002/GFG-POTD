class Solution{
  public:
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        queue<Node*> q;
        int mila=0;
        q.push(root);
        
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                Node* t=q.front();
                q.pop();
                
                if(t->left==NULL && t->right==NULL){
                    mila=1;
                    continue;
                }
                if(t->left!=NULL)
                    q.push(t->left);
                if(t->right!=NULL)
                    q.push(t->right);
            }
            if(mila==1 && q.size()>0)
                return(false);
            
        }
        return(true);
        
    }
};
