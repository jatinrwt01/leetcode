class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans(2,-1);
        int maxp=INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(nums[i]>nums[j] && (nums[i]+nums[j] == target)){
                    int p=nums[i]*nums[j];
                    if(p>maxp){
                        maxp=p;
                        ans[0]=i;
                        ans[1]=j;
                    }
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna