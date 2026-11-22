class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int cnt=0, n=nums.size();
        if(n==1) return 1;
        for(int i=1; i<n-1; i++){
            int s=(nums[i-1]+nums[i+1]);
            if(2*nums[i]>=s) cnt++;
        }
        if(nums[0]>=nums[1]) cnt++;
        if(nums[n-1]>=nums[n-2]) cnt++;
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna