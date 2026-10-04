class Solution {
public:
    bool checkValidString(string s) {
        int n=s.size();
        vector<vector<bool>>dp(n+1, vector<bool>(n+1, false));
        dp[n][0] = true;
        for(int i=n-1; i>=0; i--){
            for(int j=0; j<=n; j++){
                if(s[i] == '('){
                    dp[i][j] = dp[i+1][j+1];
                }
                else if(s[i] == ')'){
                    if(j>0){
                    dp[i][j] = dp[i+1][j-1];
                    }
                }
                else{
                    bool c1=false, c2= false, c3=false;
                    if(j<n){
                        c1= dp[i+1][j+1];
                    }
                    if(j>0){
                        c2 = dp[i+1][j-1];
                    }
                    c3 = dp[i+1][j];
                dp[i][j] = c1||c2||c3;
                }
            }
        }
        return dp[0][0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna