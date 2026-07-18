class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int num:nums){
            mx = max(num, mx);
            mn = min(num, mn);
        }
        int ans=1;
        for(int i=1; i<=mn; i++){
            if(mn%i == 0 && mx%i == 0) ans = i;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna