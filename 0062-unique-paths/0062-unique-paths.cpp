class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m, vector<int>(n, 0));
        for(int i=0; i<m; i++){
            dp[i][0] = 1;
        }
        for(int j=0; j<n; j++){
            dp[0][j] = 1;
        }
        for(int r=1; r<m; r++){
            for(int c=1; c<n; c++){
                dp[r][c] = ((r-1>=0)? dp[r-1][c] : 0)+((c-1>=0)?dp[r][c-1] : 0);
            }
        }
        return dp[m-1][n-1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna