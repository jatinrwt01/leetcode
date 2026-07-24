class Solution {
private:
    int f(int r, int c, int m, int n, vector<vector<int>>&dp){
        if(r == 0 && c == 0){
            return 1;
        }
        if(dp[r][c] != -1){
            return dp[r][c];
        }
        int right = 0;
        if(c-1>=0){
           right = f(r, c-1, m, n, dp);
        }
        int down = 0;
        if(r-1>=0){
           down = f(r-1, c,m ,n, dp);
        }
        return dp[r][c] = right+down;
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1, vector<int>(n+1, -1));
        return f(m-1, n-1, m, n, dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna