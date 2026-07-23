class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        const int MOD = 1e9+7;
        vector<int>dp(high+1, 0);
        dp[high] = 1;
        for(int i=high-1; i>=0; i--){
            int ways = 0;
            if(i >= low){
                ways++;
            }
            if(i+zero <= high){
            ways = (ways+dp[i+zero]) %MOD;
            }
            if(i+one <=high){
                ways = (ways+dp[i+one]) %MOD;
            }
            dp[i] = ways;
        }
        return dp[0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna