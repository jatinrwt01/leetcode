class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<pair<int, int>> v;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0)
                    v.push_back({i, j});
            }
        }
        for (auto it : v) {
            int row = it.first;
            int col = it.second;
            for(int i=0; i<n; i++){
                matrix[row][i] = 0;
            }
            for(int i=0; i<m; i++){
                matrix[i][col] = 0;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna