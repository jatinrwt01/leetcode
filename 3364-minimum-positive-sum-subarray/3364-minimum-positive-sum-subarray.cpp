class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size(), ms=INT_MAX;
        for(int i=0; i<n; i++){
            int s=0;
            for(int j=i; j<n; j++){
                s+=nums[j];
                int len=j-i+1;
                if(len>=l && len<=r && s>0){
                    ms=min(ms,s);
                }
            }
        }
        if(ms!=INT_MAX){
            return ms;
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna