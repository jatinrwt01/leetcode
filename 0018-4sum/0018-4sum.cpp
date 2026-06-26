class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>>ans;
        if(n<4) return {};
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-3; i++){
        if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j=i+1; j<n-2; j++){
            if(j>i+1 && nums[j] == nums[j-1]) continue;
            int l = j+1, r=n-1;
            long long s = (long long) nums[i]+nums[j];
            long long reqS = (long long) target-s;
            while(l<r){               
                long long sum = (long long) nums[l]+nums[r];
                if(sum == reqS){
                    ans.push_back( {nums[i], nums[j], nums[l], nums[r]});
                    l++;
                    r--;
                    while(l<r && nums[l] == nums[l-1]){
                        l++;
                    }
                    while(l<r && nums[r] == nums[r+1]){
                        r--;
                    }
                } else if(reqS > sum){
                    l++;
                } else{
                    r--;
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