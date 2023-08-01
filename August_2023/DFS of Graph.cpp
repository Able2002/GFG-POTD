class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node, vector<int> adj[], vector<int> &res, vector<int>&vis){
        vis[node]=1;
        res.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it, adj, res, vis);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> res;
        vector<int> vis(V, 0);
        dfs(0, adj, res, vis);
        return res;
    }
};
