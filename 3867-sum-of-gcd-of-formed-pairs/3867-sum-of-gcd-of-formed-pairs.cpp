class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefixGcd(n, 0);
        int mx = INT_MIN; 
        for(int i=0; i<n; i++){
            mx = max(mx, nums[i]);
            prefixGcd[i] = gcd(nums[i], mx);
        } 
         
        sort(prefixGcd.begin(), prefixGcd.end());
        long long sum = 0;
        int i=0, j=n-1;
        while(i<j){
            sum+=gcd(prefixGcd[i], prefixGcd[j]);
            i++;
            j--;
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna