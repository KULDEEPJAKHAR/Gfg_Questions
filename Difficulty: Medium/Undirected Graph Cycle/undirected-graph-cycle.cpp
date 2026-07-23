class Solution {
  public:
  
    bool dfs(int node, int parent, vector<int> adj[],
             vector<bool> &vis) {
        
        vis[node] = true;
        
        for (int neigh : adj[node]) {
            
            if (!vis[neigh]) {
                if (dfs(neigh, node, adj, vis))
                    return true;
            }
            else if (neigh != parent) {
                return true;
            }
        }
        
        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
        
        vector<int> adj[V];
        
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        vector<bool> vis(V, false);
        
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (dfs(i, -1, adj, vis))
                    return true;
            }
        }
        
        return false;
    }
};