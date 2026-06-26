class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        if(n<4) return {};
        sort(nums.begin(), nums.end());
        int i=0, j=1;
        set<vector<int>>st;
        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
            int l = j+1, r=n-1;
            long long s = 1LL * nums[i]+nums[j];
            long long reqS = 1LL* target-s;
            while(l<r){
                vector<int>quad;
                long long sum = 1LL * nums[l]+nums[r];
                if(sum == reqS){
                    quad.insert(quad.end(), {nums[i], nums[j], nums[l], nums[r]});
                    st.insert(quad);
                    l++;
                    r--;
                } else if(reqS > sum){
                    l++;
                } else{
                    r--;
                }
            }
        }
        }
        vector<vector<int>>ans(st.begin(), st.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna