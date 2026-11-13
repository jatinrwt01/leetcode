class Solution {
private:
    void dfs(int i, int j, vector<vector<char>>&grid, vector<vector<int>>&vis){
        int m=grid.size(), n=grid[0].size();
        vis[i][j]=1;
        //4 directions me check kar aur dfs ko call kr for the node that has not been visited yet
        if(j>0){
            if(grid[i][j-1] == '1' && !vis[i][j-1]){
                dfs(i, j-1, grid, vis);
            }
        }
        if(i>0){
            if(grid[i-1][j] == '1' && !vis[i-1][j]){
                dfs(i-1, j, grid, vis);
            }
        }
        if(i<m-1){
            if(grid[i+1][j] == '1' && !vis[i+1][j]){
                dfs(i+1, j, grid, vis);
            }
        }
        if(j<n-1){
            if(grid[i][j+1] == '1' && !vis[i][j+1]){
                dfs(i, j+1, grid, vis);
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        int m=grid.size(), n=grid[0].size();
        vector<vector<int>>vis(m, vector<int>(n, 0));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    ans++;
                    dfs(i, j, grid, vis);
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna