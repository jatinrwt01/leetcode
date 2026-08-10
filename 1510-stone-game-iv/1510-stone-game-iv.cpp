class Solution {
private:
    bool isPerfectSquare(int n){
        if(n<0) return false;
        int r=sqrt(n);
        return r*r == n;
    }
    bool helper(int ind, vector<int>&dp){
        if(ind == 0){
            return false; 
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        for(int i=1; i<=ind; i++){
            if(isPerfectSquare(i)){
                if(!helper(ind-i, dp)){
                    return dp[ind]=true;
                }
            }
        }
        return dp[ind]=false;
    }
public:
    bool winnerSquareGame(int n) {
        if(isPerfectSquare(n)){
            return true;
        }
        vector<int>dp(n+1,-1);
        return helper(n,dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna