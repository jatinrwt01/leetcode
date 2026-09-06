class Solution {
private:
    int helper(int i, int j, string &s, string &t, vector<vector<int>>&dp){
        if(j==t.size()){
            return 1;
        }
        if(i == s.size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int p=0,np=0;
        if(s[i] == t[j]){
            p=helper(i+1, j+1, s,t,dp);
            np=helper(i+1, j, s, t,dp);
            return dp[i][j]= p+np;
        }
            return dp[i][j]= helper(i+1, j, s,t,dp);
    }
public:
    int numDistinct(string s, string t) {
        int n=s.size(),m=t.size();
        vector<vector<int>>dp(n+1, vector<int>(m+1, -1));
        return helper(0,0, s,t,dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna