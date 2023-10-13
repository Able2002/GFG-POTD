class Solution{

public:
    
    vector<int>store;
    void inorder(Node*root){
        if(root!=NULL){
            inorder(root->left);
            store.push_back(root->data);
            inorder(root->right);
        }
    }
    
    int floor(Node* root, int x) {
        inorder(root);
        if(x<store[0])return -1;
        
        int index = lower_bound(store.begin(),store.end(),x)-store.begin();
        if(store[index]!=x)return store[index-1];
        return store[index];
    }
};

