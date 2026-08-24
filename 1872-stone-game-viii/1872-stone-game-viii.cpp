class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        int n=stones.size();
        vector<int>preSum(n,0);
        preSum[0]=stones[0];
        for(int i=1; i<n; i++){
            preSum[i]=preSum[i-1]+stones[i];
        }
        vector<int>dp(n, INT_MIN);
        dp[n-1]=preSum[n-1];
        for(int i=n-2; i>=0; i--){
            dp[i]=max(dp[i+1], preSum[i]-dp[i+1]);
        }
        return dp[1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna