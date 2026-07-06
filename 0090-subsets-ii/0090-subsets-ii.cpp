class Solution {
private:
    void helper(vector<int>&arr, int i, vector<int>&ds, vector<vector<int>>&ans){
        if(i == arr.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(arr[i]);
        helper(arr, i+1, ds, ans);
        ds.pop_back();
        while(i+1 < arr.size() && arr[i] == arr[i+1]){
            i++;
        }
        helper(arr, i+1, ds, ans);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ds;
        vector<vector<int>>ans;
        helper(nums, 0, ds,ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna