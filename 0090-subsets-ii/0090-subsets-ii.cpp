class Solution {
private:
    void helper(vector<int>&arr, int i, vector<int>&ds, set<vector<int>>&ans){
        if(i == arr.size()){
            ans.insert(ds);
            return;
        }
        ds.push_back(arr[i]);
        helper(arr, i+1, ds, ans);
        ds.pop_back();
        helper(arr, i+1, ds, ans);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ds;
        set<vector<int>>ans;
        helper(nums, 0, ds,ans);
        vector<vector<int>> subsets (ans.begin(), ans.end());
        return subsets;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna