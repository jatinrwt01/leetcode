class Solution {
private:
    void helper(vector<int>&arr, int i, int n, int k, vector<int>&ds, vector<vector<int>>&ans){
        if(i == arr.size()){
        if(n == 0 && ds.size()==k){
            ans.push_back(ds);
        }
            return;
        }
        if(ds.size() > k){
            return;
        }
        if(arr[i] <= n){
        ds.push_back(arr[i]);
        helper(arr, i+1, n-arr[i], k, ds, ans);
        ds.pop_back();
        }
        helper(arr, i+1, n, k, ds, ans);
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> c = {1,2,3,4,5,6,7,8,9};
        vector<int>ds;
        vector<vector<int>>ans;
        helper(c, 0, n, k, ds, ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna