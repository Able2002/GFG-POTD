/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */


//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int> ans;
    queue<Node*> q;
    stack<int> st;
    if(root == NULL) return ans;
    q.push(root);
    bool reverse = true;
    while(!q.empty()){
        int count = q.size();
        for(int i = 0; i < count; i++){
            Node* curr = q.front(); q.pop();
            if(reverse){
                st.push(curr->data);
            }
            else
                ans.push_back(curr->data);
            if(curr->left != NULL) q.push(curr->left);
            if(curr->right != NULL) q.push(curr->right);
        }
        if(reverse){
            while(!st.empty()){
                ans.push_back(st.top());
                st.pop();
            }
        }
        reverse = !reverse;
    }
    return ans;
}
