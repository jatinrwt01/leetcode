class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int r = intervals.size();
        int cnt = r;
        vector<bool>c(r,false);
        for(int i=0; i<r; i++){
            for(int j=0; j<r; j++){
                if(i!=j && intervals[j][0] >= intervals[i][0] && intervals[j][1] <= intervals[i][1]){
                    if(c[j] == false){
                    c[j] = true;
                    cnt--;
                    }
                }
            }
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna