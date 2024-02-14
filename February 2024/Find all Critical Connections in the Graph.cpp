class Solution {
public:
 void dfs(int node , int parent , vector<int>&low ,vector<int>&tin , vector<int>&vis , vector<int> adj[] , int &timer,  vector<vector<int>> & bridges ){
        vis[node] = 1;
        low[node] = timer;
        tin[node] = timer;
        timer++;
        for(auto nbr : adj[node]){
            if(nbr == parent) continue;
            else if(!vis[nbr]){
                dfs(nbr,node , low , tin , vis , adj , timer , bridges);
                low[node] = min(low[node] , low[nbr]);
                if(low[nbr] > tin[node]){
                    if(nbr> node) bridges.push_back({node,nbr});
                    else bridges.push_back({nbr,node});
                }
            }
            else{
                low[node] = min(low[node] , low[nbr]);
            }
        }
    }
 
vector<vector<int>>criticalConnections(int v, vector<int> adj[]){
    // Code here
    vector<vector<int>> bridges;
    vector<int> low(v,0);
    vector<int> tin(v,0);
    vector<int> vis(v,0);
    int parent = -1;
    int timer = 0;
    dfs(0 , parent , low , tin , vis , adj , timer , bridges);
    sort(bridges.begin() , bridges.end());
    return bridges;   
}
};
