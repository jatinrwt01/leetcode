class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int t = 0, b = m-1, l = 0, r= n-1;
        while(t<=b && l<=r){
        for(int j=l; j<=r; j++){
            ans.push_back(matrix[t][j]);
        }
        for(int i=t+1; i<=b; i++){
            ans.push_back(matrix[i][r]);
        }
        if(t<b){
        for(int j=r-1; j>=l; j--){
            ans.push_back(matrix[b][j]);
        }
        }
        if(l<r){
        for(int i=b-1; i>=t+1; i--){
            ans.push_back(matrix[i][l]);
        }
        }
        t++;
        b--;
        l++;
        r--;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna