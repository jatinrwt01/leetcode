class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int pl =1, pr=1, mpl=INT_MIN, mpr=INT_MIN ;
        for(int i=0; i<n; i++){
            if(pl==0) pl=1;
            pl*=nums[i];
            mpl=max(pl,mpl);
        }
        for(int i=n-1; i>=0; i--){
            if(pr == 0) pr=1;
            pr*=nums[i];
            mpr = max(pr,mpr);
        }
        return max(mpl,mpr);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna