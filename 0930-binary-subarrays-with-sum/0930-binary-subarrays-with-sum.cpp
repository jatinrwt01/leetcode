class Solution {
private:
    int helper(vector<int>&nums, int k){
        int n=nums.size(), l=0, r=0, ans=0, sum=0;
        while(r<n){
            if(nums[r] == 1){
                sum++;
            }
            while(sum > k){
                if(nums[l] == 1){
                    sum--;
                }
                l++;
            }
            if(sum <= k){
                ans+=(r-l+1);
            }
            r++;
        }
        return ans;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int x = helper(nums, goal);
        int y = 0;
        goal<=0 ? y = 0 : y = helper(nums,goal-1);
        return x-y;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna