class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long ms=0;
        vector<int>inc;
        for(int i=0; i<nums.size(); i++){
            ms+=nums[i];
            string s=to_string(nums[i]);
            sort(s.begin(), s.end(), greater<char>());
            int mxnum=stoi(s);
            int mxinc=mxnum-nums[i];
            inc.push_back(mxinc);
        }
        sort(inc.begin(), inc.end());
        reverse(inc.begin(), inc.end());
        for(int i=0; i<k; i++){
            ms+=inc[i];
        }
        return ms;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna