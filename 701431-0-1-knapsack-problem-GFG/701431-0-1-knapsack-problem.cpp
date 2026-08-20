class Solution {
  private:
    int f(int i, int w, vector<int>&val, vector<int>&wt, vector<vector<int>>&dp){
        if(i == 0){
            if(w>=wt[0]){
                return val[0];
            }
            return 0;
        }
        if(dp[i][w] != -1){
            return dp[i][w];
        }
        int p=INT_MIN, np=INT_MIN;
        if(w>=wt[i]){
            p=val[i]+f(i-1, w-wt[i], val, wt,dp);
        }
        np=f(i-1, w, val, wt,dp);
        return dp[i][w]=max(p, np);
    }
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n=val.size();
        vector<vector<int>>dp(n+1, vector<int>(W+1, -1));
       return f(n-1, W, val, wt,dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna