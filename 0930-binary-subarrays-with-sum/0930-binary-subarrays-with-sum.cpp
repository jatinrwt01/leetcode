class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans = 0;
        vector<int> preSum(nums.size(), 0);
        preSum[0] = nums[0];
        for(int i =1; i<nums.size(); i++){
            preSum[i] =  preSum[i-1]+nums[i]; 
        }
        unordered_map<int,int>mp;
        mp[0] = 1;
        for(int i=0; i<nums.size(); i++){
            ans+=mp[preSum[i] - goal];
            mp[preSum[i]]++;
        }   
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna