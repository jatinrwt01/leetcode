class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0, bottom = m-1, left = 0, right= n-1;
        while(top<=bottom && left<=right){
        for(int j=left; j<=right; j++){
            ans.push_back(matrix[top][j]);
        }
        for(int i=top+1; i<=bottom; i++){
            ans.push_back(matrix[i][right]);
        }
        if(top<bottom){
        for(int j=right-1; j>=left; j--){
            ans.push_back(matrix[bottom][j]);
        }
        }
        if(left<right){
        for(int i=bottom-1; i>=top+1; i--){
            ans.push_back(matrix[i][left]);
        }
        }
        top++;
        bottom--;
        left++;
        right--;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna