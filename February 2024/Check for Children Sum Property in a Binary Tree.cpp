class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    bool check(Node *root){
        if(root == NULL)
            return true;
        if(root->left == NULL && root->right == NULL)
            return true;
        
        int sum = 0;
        if(root->left != NULL)
            sum += root->left->data;
        if(root->right != NULL)
            sum += root->right->data;
    
        return (sum == root->data && check(root->left) && check(root->right));
    }
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
        return check(root);
     
    }
};
