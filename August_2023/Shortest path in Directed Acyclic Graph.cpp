
class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        
        vector<pair<int,int>> adj[N];
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back({edges[i][1],edges[i][2]});
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        pq.push({0,0});
        
        vector<int> distance(N,1e5);
        distance[0]=0;
        
        while(!pq.empty())
        {
            int dist=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            
            for(auto it:adj[node])
            {
                int next_node=it.first;
                int d=it.second;
                
                if(dist+d<distance[next_node])
                {
                    distance[next_node]=dist+d;
                    pq.push({distance[next_node],next_node});
                }
            }
        }
        
        for(int i=0;i<N;i++)
        {
            if(distance[i]==1e5)
                distance[i]=-1;
        }
        
        return distance;
    }
};
