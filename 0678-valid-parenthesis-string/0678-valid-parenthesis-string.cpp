class Solution {
private:
    bool helper(int i, int cnt, const string &s, vector<vector<int>>&dp){
         if(cnt<0){
            return false;
        }
        if(i == s.size()){
            if(cnt == 0){
                return true;
            }
            return false;
        }
        if(dp[i][cnt] != -1){
            return dp[i][cnt];
        }
       if(s[i] == '('){
            return dp[i][cnt]=helper(i+1, cnt+1,s,dp);
       }
         if(s[i] == ')'){
            return dp[i][cnt]=helper(i+1, cnt-1, s,dp);
       }
            return dp[i][cnt]= helper(i+1, cnt+1, s,dp)||helper(i+1, cnt-1, s,dp)||helper(i+1, cnt, s,dp);
    }
public:
    bool checkValidString(string s) {
        int open=0, n=s.size();
        vector<vector<int>>dp(n, vector<int>(n+1, -1));
        return helper(0, open, s,dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna