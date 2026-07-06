class Solution {
    void helper(vector<int>&arr, int i, int target, vector<int>&ds, vector<vector<int>>&ans){
         if(target == 0){
         ans.push_back(ds);
        return;
        }
        for(int j=i; j<arr.size(); j++){
            if(j>i && arr[j] == arr[j-1]){
                continue;
            }
            if(arr[j] > target){
                break;
            }
                ds.push_back(arr[j]);
                helper(arr, j+1, target-arr[j], ds, ans);
                ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int>ds;
        vector<vector<int>>ans;
        helper(candidates, 0, target, ds, ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna