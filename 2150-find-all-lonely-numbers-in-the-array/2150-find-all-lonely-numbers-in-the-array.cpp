class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        for(int num:nums){
            if(mp[num]==1 && !mp[num-1] && !mp[num+1]){
                ans.push_back(num);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna