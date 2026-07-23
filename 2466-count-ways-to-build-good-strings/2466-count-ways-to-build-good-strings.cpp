class Solution {
private:
    int f(int z, int o, int l, int h, int len, vector<int>&dp){
        const int MOD = 1e9+7;
        if(len  > h) return 0;
        if(len == h) return 1;
        if(dp[len] != -1){
            return dp[len];
        }
        int ways = 0;
        if(len >= l && len<=h){
            ways++;
        }
        ways+=f(z,o,l, h, len+z, dp);
        ways+=f(z,o,l,h,len+o, dp);
        return dp[len] = ways%MOD;
    }
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int>dp(high+1, -1);
        int len = 0;
        return f(zero, one, low, high, len, dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna