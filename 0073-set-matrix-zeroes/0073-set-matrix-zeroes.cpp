class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      int m = matrix.size();
      int n = matrix[0].size();
      vector<int>rZero(m,0);
      vector<int> cZero(n,0);
      for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j] == 0){
                rZero[i] = 1;
                cZero[j] = 1;
            }
        }
      }
      for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(rZero[i] || cZero[j]){
                matrix[i][j] = 0;
            }
        }
      }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna