class Solution {
private:
    int f(int row, int robo1c, int robo2c, vector<vector<int>>&grid, vector<vector<vector<int>>>&dp){
         int m = grid.size();
         int n = grid[0].size();
         if(robo1c<0 || robo1c>n-1 || robo2c<0 || robo2c>n-1){
            return -1e8;
         }
         if(row == m-1){
            if(robo1c == robo2c){
                return grid[row][robo1c];
            } else{
                return grid[row][robo1c]+grid[row][robo2c];
            }
         }
         if(dp[row][robo1c][robo2c] != -1){
            return dp[row][robo1c][robo2c];
         }
         int ans = 0;
         for(int dr1c=-1; dr1c<=1; dr1c++){
            for(int dr2c=-1; dr2c<=1; dr2c++){
                if(robo1c == robo2c){
                    ans = max(ans, grid[row][robo1c]+f(row+1, robo1c+dr1c, robo2c+dr2c, grid, dp));
                } else{
                    ans = max(ans, grid[row][robo1c]+grid[row][robo2c]+f(row+1, robo1c+dr1c, robo2c+dr2c, grid, dp));
                }
            }
         }
         return dp[row][robo1c][robo2c] = ans;
    }
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<vector<int>>>dp(m,vector<vector<int>>(n, vector<int>(n, -1)));
        return f(0, 0, n-1, grid, dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna