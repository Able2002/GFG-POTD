class Solution{
    public:
        // Node* LCA(Node *root, int n1, int n2) // LESS CODE
        // {
        //     // code here
        //     if(root==NULL || root->data==n1 || root->data==n2)
        //         return root;
        //     Node* left=LCA(root->left, n1, n2);
        //     Node* right=LCA(root->right, n1, n2);
        //     if(left==NULL)
        //         return right;
        //     else if(right==NULL)
        //         return left;
        //     else
        //         return root;
        // }
        Node* LCA(Node *root, int n1, int n2)
        {
            // code here
            if(root==NULL)
                return NULL;
            if(root->data==n1 || root->data==n2)
                return root;
            Node* left=LCA(root->left, n1, n2);
            Node* right=LCA(root->right, n1, n2);
            if(left==NULL)
                return right;
            else if(right==NULL)
                return left;
            else
                return root;
        }

};
