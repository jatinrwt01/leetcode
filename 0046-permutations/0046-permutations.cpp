class Solution {
private:
    void helper(vector<int>&arr, vector<int>&ds, unordered_set<int>&st, vector<vector<int>>&ans){
            if(ds.size() == arr.size()){
                ans.push_back(ds);
                return;
            }
        
        for(int i=0; i<arr.size(); i++){
        if(st.find(i) == st.end()){
            ds.push_back(arr[i]);
            st.insert(i);
            helper(arr, ds, st, ans);
            ds.pop_back();
            st.erase(i);
        }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        unordered_set<int>st;
        vector<int>ds;
        vector<vector<int>>ans;
        helper(nums, ds, st, ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna