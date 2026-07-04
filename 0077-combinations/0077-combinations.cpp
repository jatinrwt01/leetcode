class Solution {
private:
    void helper(vector<int>&arr, int i, int k, vector<vector<int>>&ans, vector<int>&ds){
        if(i == arr.size()){
            if(ds.size() == k){
                ans.push_back(ds);
            }
            return;
        }
        ds.push_back(arr[i]);
        helper(arr, i+1, k, ans, ds);
        ds.pop_back();
        helper(arr, i+1, k ,ans, ds);
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>arr;
        vector<int>ds;
        vector<vector<int>>ans;
        for(int i=1; i<=n; i++){
            arr.push_back(i);
        }
         helper(arr, 0, k, ans, ds);
         return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna