class Solution {
private:
    int f(int i1, int i2, vector<vector<int>>&triangle, vector<vector<int>>&dp){
        if(i1 == 0){
            return triangle[0][0];
        }
        if(dp[i1][i2] != -1){
            return dp[i1][i2];
        }
        int above = INT_MAX, leftdiag = INT_MAX;
        if(i1-1>=i2 && i2>=0){
         int val = f(i1-1, i2, triangle,dp);
         if(val!=INT_MAX){
            above = triangle[i1][i2]+val;
         }
        }
        if(i1>=i2 && i2>0){
            int val = f(i1-1, i2-1, triangle,dp);
            if(val!=INT_MAX){
            leftdiag = triangle[i1][i2]+val;
            }
        }
        return dp[i1][i2] = min(above, leftdiag);
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size(); 
        vector<vector<int>>dp(m, vector<int>(m,-1));
        int ans = INT_MAX;
        for(int i=0; i<m; i++){
            ans = min(ans, f(m-1, i, triangle,dp));
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna