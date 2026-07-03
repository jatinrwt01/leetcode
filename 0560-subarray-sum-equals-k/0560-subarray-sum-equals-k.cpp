class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(), ans = 0;
        vector<int>preSum(n,0);
        preSum[0] = nums[0];
        for(int i=1; i<n; i++){
            preSum[i] = preSum[i-1] + nums[i];
        }
        unordered_map<int, int> mp;
        mp[0]= 1;
        for(int i=0; i<n; i++){
            if(mp[preSum[i] - k]){
                ans+=mp[preSum[i] - k];
            }
            mp[preSum[i]]++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna