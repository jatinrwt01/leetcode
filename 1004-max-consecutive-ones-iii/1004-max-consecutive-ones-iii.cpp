class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, r = 0, maxOnes = 0, zeroes = 0;
        while (r < n) {
            if (nums[r] == 0) {
                zeroes++;
            }
            while (zeroes > k) {
                if (nums[l] == 0) {
                    zeroes--;
                }
                l++;
            }
            maxOnes = max(maxOnes, (r - l + 1));
            r++;
        }
        return maxOnes;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna