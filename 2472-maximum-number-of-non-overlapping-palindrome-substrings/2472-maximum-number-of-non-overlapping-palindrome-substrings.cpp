class Solution {
private:
    bool isPalindrome(string &s, int l, int r){
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    int helper(int i,string &s, int k, vector<int>&dp){
        if(i<0){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int ti=INT_MIN, dti=INT_MIN;
        dti=helper(i-1, s, k,dp);
        for(int j=0; j<=i; j++){
            if((i-j+1)>=k && isPalindrome(s, j, i)){
                ti=max(ti, 1+helper(j-1, s, k,dp));
            }
        }
        return dp[i]=max(ti, dti);
    }
public:
    int maxPalindromes(string s, int k) {
        int n=s.size();
        vector<int>dp(n+1, -1);
        return helper(n-1, s, k,dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna