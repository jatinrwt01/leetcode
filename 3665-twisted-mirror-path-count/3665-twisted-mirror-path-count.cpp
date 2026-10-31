class Solution {
private:
    const int MOD = 1e9 + 7;
    int helper(int i, int j, int dir, vector<vector<int>>& grid, int m, int n, vector<vector<vector<int>>>&dp) {
        if(i == m-1 && j == n-1){
            return 1;
        }
        if(dp[i][j][dir] != -1){
            return dp[i][j][dir];
        }
        int ans = 0;
        if(grid[i][j] == 0){
            if(j+1<n){
                ans=(ans+helper(i, j+1, 0, grid, m,n,dp))%MOD;
            }
            if(i+1<m) {
                ans=(ans+helper(i+1, j, 1, grid, m,n, dp))%MOD;
            }
        }
        else{
            if(dir==0 && i+1<m) {
                ans =(ans+helper(i+1, j, 1, grid, m,n, dp))%MOD;
            }
            else if(dir == 1 && j+1<n){
                ans=(ans+helper(i, j+1, 0, grid, m,n,dp))%MOD;
            }
        }
        return dp[i][j][dir]=ans;
    }

public:
    int uniquePaths(vector<vector<int>>& grid){
        int m=grid.size(), n=grid[0].size();
        vector<vector<vector<int>>>dp(m, vector<vector<int>>(n, vector<int>(3,-1)));
        return helper(0, 0, 0, grid,m,n,dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna