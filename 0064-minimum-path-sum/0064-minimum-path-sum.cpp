class Solution {
private:
    int f(int r, int c, vector<vector<int>>&grid, vector<vector<int>>&dp){
        if(r == 0 && c == 0){
            return grid[0][0];
        }
        if(dp[r][c] != -1){
            return dp[r][c];
        }
        int right=INT_MAX, down=INT_MAX;
        if(c-1 >= 0){
         right = f(r, c-1,grid, dp)+grid[r][c];
        }
        if(r-1 >= 0){
         down = f(r-1, c,grid,dp)+grid[r][c];
        }
        return dp[r][c] = min(right, down);
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>dp(m, vector<int>(n,-1));
        return f(m-1, n-1, grid,dp);
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna