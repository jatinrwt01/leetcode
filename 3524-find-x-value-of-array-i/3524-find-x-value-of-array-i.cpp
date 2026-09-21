class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long>ans(k,0);
        int n = nums.size();
        vector<vector<int>>dp(n, vector<int>(k,0));
        for(int i=0; i<k; i++){
            if(nums[0]%k == i){
                dp[0][i]=1;
            }
        }
        for(int i=1; i<n; i++){
            for(int j=0; j<k; j++){
                int rem = (j*(nums[i]%k))%k;
                dp[i][rem]+=dp[i-1][j];
            }
            dp[i][nums[i]%k]++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                ans[j] += dp[i][j];
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna