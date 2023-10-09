class Solution{
    public:
    int solve(struct Node* node, int h, int max_h){
         if(node == NULL) return max_h;
         
         max_h = max(max_h, h);
         max_h = solve(node->left, h+1, max_h);
         max_h = solve(node->right, h+1, max_h);
         
         return max_h;
    }
    
    int height(struct Node* node){
        if(node == NULL) return 0;
        
        return solve(node, 1, 1);
    }
};
