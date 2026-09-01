class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string str=s;
        reverse(str.begin(), str.end());
        int n=s.size();
        vector<vector<int>>dp(n+1, vector<int>(n+1, INT_MIN));
        for(int i=0; i<=n; i++){
            dp[i][0] = 0;
            dp[0][i] = 0;
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(s[i-1]==str[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                } else{
                    dp[i][j]=max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
        return dp[n][n];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna