class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>>dp(m, vector<int>(n, 0));
        if(obstacleGrid[0][0] == 0){
        dp[0][0] = 1;
        } else{
            dp[0][0] = 0;
        }
        for(int r=0; r<m; r++){
            for(int c=0; c<n; c++){
                if(r == 0 && c == 0){
                     continue;
                } else{
                    if(obstacleGrid[r][c] == 1){
                        continue;
                    } else{
                    dp[r][c] = ((r>0)?dp[r-1][c]:0) + ((c>0)?dp[r][c-1]:0);
                    }
                }
            }
        }
        return dp[m-1][n-1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna