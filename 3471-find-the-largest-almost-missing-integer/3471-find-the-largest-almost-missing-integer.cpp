class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int ans=-1;
        int l=INT_MIN;
        for(int num : nums){
            mp[num]++;
            l=max(l,num);
        }
        if(k ==1){
            for(int num:nums){
                if(mp[num] == 1){
                    ans=max(ans,num);
                }
            }
        } else if(k == nums.size()){
            ans=l;
        } else{
            if(mp[nums[0]] == 1 && mp[nums[nums.size()-1]] ==1){
                ans=max(nums[0], nums[nums.size()-1]);
            } else{
                if(mp[nums[0]] > 1 && mp[nums[nums.size()-1]] == 1){
                    ans=nums[nums.size()-1];
                } else if(mp[nums[nums.size()-1]] > 1 && mp[nums[0]] == 1){
                    ans=nums[0];
                } else{
                    ans=-1;
                }
            }
        }
    return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna