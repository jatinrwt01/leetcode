class Solution {
private:
    int f(int row, int lastcol, vector<vector<int>>&matrix, vector<vector<int>>&dp){
        if(row == 0){
            return matrix[0][lastcol];
        }
        if(dp[row][lastcol] != INT_MIN){
            return dp[row][lastcol];
        }
        int above=INT_MAX, leftdiag=INT_MAX, rightdiag=INT_MAX; 
        above = matrix[row][lastcol]+f(row-1, lastcol, matrix,dp);
        if(lastcol-1 >= 0){
            leftdiag = matrix[row][lastcol]+f(row-1, lastcol-1, matrix,dp);
        }
        if(lastcol+1 <= matrix.size()-1){
            rightdiag = matrix[row][lastcol]+f(row-1, lastcol+1, matrix,dp);
        }
        return dp[row][lastcol]=min(above, min(leftdiag, rightdiag));
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>>dp(n, vector<int>(n,INT_MIN));
        int ans = INT_MAX;
        for(int j=0; j<n; j++){
            ans = min(ans,f(n-1, j, matrix, dp));
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna