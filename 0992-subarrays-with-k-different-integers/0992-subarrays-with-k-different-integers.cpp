class Solution {
private:
    int helper(vector<int>&nums, int k){
        int n=nums.size();
        unordered_map<int,int>mp;
        int l=0, r=0, ans=0, unique=0;
        while(r<n){
            if(mp[nums[r]] == 0){
                 unique++;
            }
            mp[nums[r]]++;
            while(unique > k){
                mp[nums[l]]--;
                 if(mp[nums[l]] == 0) {
                    unique--;
                }
                l++;
            }
            if(unique <= k) ans+=(r-l+1);
            r++;
        }
        return ans;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int x = helper(nums, k);
        int y = helper(nums, k-1);
        return x-y;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna