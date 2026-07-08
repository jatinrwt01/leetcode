class Solution {
private:
    void helper(vector<int>&arr, vector<int>&ds, vector<bool>&chk, set<vector<int>>&ans){
            if(ds.size() == arr.size()){
                ans.insert(ds);
                return;
            }
        
        for(int i=0; i<arr.size(); i++){
        if(!chk[i]){
            ds.push_back(arr[i]);
            chk[i] = true;
            helper(arr, ds, chk, ans);
            ds.pop_back();
            chk[i] =false;
        }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<bool>chk(nums.size(), false);
        vector<int>ds;
        set<vector<int>>ans;
        helper(nums, ds, chk, ans);
        vector<vector<int>>permutes (ans.begin(), ans.end());
        return permutes;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna