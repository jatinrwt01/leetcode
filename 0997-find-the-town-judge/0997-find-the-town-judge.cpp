class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>diff(n+1,0);
        for(auto it:trust){
            diff[it[0]]--;
            diff[it[1]]++;
        }
        for(int i=1; i<=n; i++){
            if(diff[i] == n-1){
                return i;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna