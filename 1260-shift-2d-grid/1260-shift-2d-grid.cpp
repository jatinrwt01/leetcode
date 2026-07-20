class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int>temp(m*n, 0);
        int id = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                temp[id] = grid[i][j];
                id++;
            }
        }
        k = k%(m*n);
        reverse(temp.begin(), temp.begin()+(m*n-k));
        reverse(temp.begin()+(m*n-k), temp.end());
        reverse(temp.begin(), temp.end());
        int idx = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                grid[i][j] = temp[idx];
                idx++;
            }
        }    
        return grid;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna