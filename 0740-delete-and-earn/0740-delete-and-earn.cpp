class Solution {
private:
    int f(int i, vector<int>&pts, vector<int> &dp){
        if(i == 0) return pts[0];
        if(i<0) return 0;
        if(dp[i] != -1){
            return dp[i];
        }
        int p=pts[i]+f(i-2, pts, dp);
        int np = 0+f(i-1, pts, dp);
        return dp[i] = max(p, np);
    }
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
        return f(pts.size()-1, pts, dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna