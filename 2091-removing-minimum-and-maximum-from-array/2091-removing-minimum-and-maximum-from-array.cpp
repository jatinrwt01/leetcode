class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int minidx=-1, maxidx=-1;
        for(int i=0; i<n; i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                maxidx=i;
            }
            if(nums[i]<mini){
                mini=nums[i];
                minidx=i;
            }
        }
        int c1=max(maxidx,minidx)+1;
        int c2=n-min(maxidx,minidx);
        int c3 = min(maxidx, minidx)+1+n-max(maxidx,minidx);
        return min(c1, min(c2,c3));
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna