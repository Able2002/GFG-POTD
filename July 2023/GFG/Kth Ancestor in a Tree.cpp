

//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
	int data;
	struct Node *left, *right;
};
*/
// your task is to complete this function
bool findallans(Node *root, vector<int> &v, int node){
    if(root==NULL)
    return false;
    if (root ->data==node)
    return true;
    bool left = findallans(root->left,v,node);
    bool right = findallans(root->right,v,node);
    if (left||right)
    v.push_back(root->data);
    return (left||right);
}
int kthAncestor(Node *root, int k, int node)
{
    // Code here
    vector<int> v;
    bool left = findallans(root,v,node);
    if(v.size()<k)
    return -1;
    else
    return v[k-1];
}
