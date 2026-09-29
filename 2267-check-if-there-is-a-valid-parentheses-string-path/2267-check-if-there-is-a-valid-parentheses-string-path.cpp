class Solution {
    bool helper(vector<vector<char>>&grid, int i, int j, int m, int n, int b, vector<vector<vector<int>>>&dp){
        if(grid[i][j] == '('){
            b++;
        }else{
            b--;
        }
        if(b<0){
            return false;
        }
        if(i == m-1 && j == n-1){
            return b==0;
        }
        if(dp[i][j][b]!=-1){
            return dp[i][j][b];
        }
    bool down = false, right=false;
    if(i+1 < m){
        down=helper(grid, i+1, j, m, n, b,dp);
    }
    if(j+1<n){
        right=helper(grid, i, j+1, m, n, b,dp);
    }
    return dp[i][j][b]=down||right;
    }
public:
    bool hasValidPath(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<vector<int>>>dp(m, vector<vector<int>>(n, vector<int>(m+n, -1)));
        return helper(grid, 0, 0, m, n, 0,dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna