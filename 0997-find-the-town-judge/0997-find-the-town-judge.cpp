class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,pair<int, int>>mp;
        if(n==1) return 1;
        for(auto it:trust){
            mp[it[0]].second++;
            mp[it[1]].first++;
        }
        for(auto it:mp){
            if(it.second.first == n-1 && it.second.second == 0){
                return it.first;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna