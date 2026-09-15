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
public:
    int maxPalindromes(string s, int k) {
        int n=s.size();
        vector<int>dp(n+1, -1);
        dp[0]=0;
        for(int i=0; i<n; i++){
            dp[i+1]=dp[i];
            for(int j=0; j<=i; j++){
            if((i-j+1)>=k && isPalindrome(s, j, i)){
                dp[i+1]=max(dp[i+1], 1+dp[j]);
            }
        }
        }
        return dp[n];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna