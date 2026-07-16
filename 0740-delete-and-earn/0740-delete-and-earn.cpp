class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int mx=INT_MIN;
        for(int num:nums){
            mx = max(mx, num);
        }
        vector<int>pts(mx+1,0);
        unordered_map<int, int>mp;
        for(int num:nums){
            mp[num]++;
        }
        for(auto it:mp){
            pts[it.first] = it.second*it.first;
        }

        vector<int>dp(mx+1, -1);
        dp[0] = pts[0];
        for(int i=1; i<=mx; i++){
            int p = pts[i]+ ((i>1) ? dp[i-2] : 0);
            int np = 0+dp[i-1];
            dp[i] = max(p,np);
        }
        return dp[mx];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna