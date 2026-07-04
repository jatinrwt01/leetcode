class Solution {
private:
    void helper(vector<int>&arr, int i, vector<int>&ds, int k , vector<vector<int>>&ans, int sum){
        if(sum > k) return;
        if(i == arr.size()){
            if(sum == k){
                ans.push_back(ds);
            }
            return;
        }
        ds.push_back(arr[i]);
        sum+=arr[i];
        helper(arr, i, ds, k ,ans, sum);
        ds.pop_back();
        sum-=arr[i];
        helper(arr, i+1, ds, k, ans, sum);
    }
    int sum(vector<int>&arr){
        int s=0;
        for(int a:arr){
            s+=a;
        }
        return s;
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        int sum = 0;
        helper(candidates, 0, ds, target, ans, sum);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna