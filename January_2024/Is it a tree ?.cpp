class Solution {
public:
    bool isCyclic(int node, int parent, vector<vector<int>>& adj, vector<bool>& visited) {
        visited[node] = true;

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                if (isCyclic(neighbor, node, adj, visited)) {
                    return true;
                }
            } else if (neighbor != parent) {
                return true; // Back edge, cycle detected
            }
        }

        return false;
    }

    int isTree(int n, int m, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<bool> visited(n, false);

        for (int i = 0; i < m; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // Check for cycles using DFS
        if (isCyclic(0, -1, adj, visited)) {
            return 0; // Cycle detected, not a tree
        }

        // Check if all nodes are visited
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                return 0; // Not all nodes are visited, disconnected components present
            }
        }

        return 1; // Tree
    }
};
