class Solution {
private:
    int f(int i, string &s, vector<int>&dp){
        const int MOD = 1e9+7;
        if(i< 0){
            return 1;
        }
        if(dp[i] != -1){
            return dp[i];
        }
        int j=-1;
        for(int idx=0; idx<i; idx++){
            if(s[idx] == s[i]){
                j=idx;
            }
        }
        if(j==-1){
            return dp[i]= 2LL*f(i-1, s,dp)%MOD;
        }
        return dp[i]= (2LL*f(i-1,s,dp)-f(j-1,s,dp)+MOD)%MOD;
    }
public:
    int distinctSubseqII(string s) {
        const int MOD = 1e9+7;
        int n=s.size();
        vector<int>dp(n+1, -1);
        return (f(n-1,s,dp)-1 +MOD) %MOD;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna