class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        for(auto it:edges){
            int u=it[0], v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>vis(n,0);
        queue<int>q;
        vis[source]=1;
        q.push(source);
        while(!q.empty()){
            int node=q.front();
            if(node == destination){
                return true;
            }
            q.pop();
            vis[node]=1;
            for(auto it:adj[node]){
                if(!vis[it]){
                q.push(it);
                vis[it]=1;
                }
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna