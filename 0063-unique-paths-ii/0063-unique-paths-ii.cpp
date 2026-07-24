class Solution {
private:
    int f(int r, int c, vector<vector<int>>&mat, vector<vector<int>>&dp){
        if(mat[r][c] == 1){
            return 0;
        }
        if(r == 0 && c == 0){
            return 1;
        }
        if(dp[r][c] != -1){
            return dp[r][c];
        }
        int right=0, down=0;
        if(c-1>=0){
            right = f(r, c-1, mat, dp);
        }
        if(r-1>=0){
             down = f(r-1, c, mat, dp);
        }
        return dp[r][c] = right+down;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>>dp(m, vector<int>(n, -1));
        return f(m-1, n-1, obstacleGrid, dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna