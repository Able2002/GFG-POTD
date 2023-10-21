class Solution
{
 public:
 //Function to find the level of node X.
 int nodeLevel(int V, vector<int> adj[], int X) 
 {
     queue<int> q;
    vector<int> vis(V, 0);
    int level = 0;
    q.push(0);
    vis[0] = 1;
 
    while (!q.empty()) {
        int size = q.size();  
 
        for (int i = 0; i < size; i++) {
            int adjnode = q.front();
            q.pop();
 
            if (adjnode == X) {
                return level;
            }
 
            for (auto x : adj[adjnode]) {
                if (!vis[x]) {
                    vis[x] = 1;
                    q.push(x);
                }
            }
        }
 
        level++;  
    }
 
    return -1;
}
 
};
