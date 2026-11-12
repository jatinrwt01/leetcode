class Solution {
private:
    void dfs(int node, vector<vector<int>>&adj, vector<int>&vis){
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it, adj, vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int ans=0;
        vector<vector<int>>adj(n);
        vector<int>vis(n,0);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(isConnected[i][j] == 1){
                    adj[i].push_back(j);
                }
            }
        }
        for(int i=0; i<n; i++){
            if(!vis[i]){
                ans++;
                dfs(i, adj, vis);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna