class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int ans=1, n=nums.size();
        if(k == 1) return n;
        for(int i=0; i<n; i++){
            int s=0;
            int r=nums[i]%k;
            for(int j=i; j<n; j++){
                 if(nums[j]%k != r){
                    break;
                }
                s+=nums[j];
                if(s%k == r){
                    ans=max(ans, (j-i+1));
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna