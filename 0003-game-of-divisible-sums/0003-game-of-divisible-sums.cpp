class Solution {
private:
    long long helper(vector<int>&nums, int i,vector<long long>&dp){
        int n=nums.size();
        if(i>=n) return 0;
        if(dp[i]!=-1){
            return dp[i];
        }
        long long pickone=0, picktwo=INT_MIN;
        long long sc1=0, sc2=0;
        sc1=nums[i];
        if(sc1%3==0){
            pickone=sc1-helper(nums,i+1,dp);
        }else{
            pickone=sc1+helper(nums, i+1,dp);
        }

        if(i+1<n){
            sc2=nums[i]+nums[i+1];
            if(sc2%3==0){
                picktwo=sc2-helper(nums,i+2,dp);
            }else{
                picktwo=sc2+helper(nums,i+2,dp);
            }
        }
        return dp[i]= max(pickone,picktwo);
    }
public:
    long long maxDifference(vector<int>& nums) {
        int n=nums.size();
        vector<long long>dp(n,-1);
        return helper(nums, 0,dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna