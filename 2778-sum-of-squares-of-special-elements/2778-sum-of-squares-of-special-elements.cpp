class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        long long sqsum=0;
        for(int i=1; i<=n; i++){
            if(n%i == 0){
                long long sq = pow(nums[i-1],2);
                sqsum+=sq;
            }
        }
        return sqsum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna