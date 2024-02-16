class Solution
{
public:
    void helper(Node *root,Node * &newNode,Node * &r){
        if(!root) return ;
        
        helper(root->left,newNode,r);
        
        if(!newNode) newNode = root;
        if(r){
            r->right = root;
            r->left = NULL;
        }
        
        r = root;
        helper(root->right,newNode,r);
    }
    
public:
    Node *flattenBST(Node *root)
    {
        Node * newNode = NULL,*r = NULL;
        helper(root,newNode,r);
        r->left = NULL;
        return newNode;
    }
};
