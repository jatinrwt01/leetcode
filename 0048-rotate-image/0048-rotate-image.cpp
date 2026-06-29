class Solution {
private:
    void transpose(vector<vector<int>>&mat, int n){
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
    }

    void reverse(vector<int>&arr){
        int n = arr.size();
        int i=0, j=n-1;
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    void reverseRows(vector<vector<int>>&mat){
        for(int i=0; i<mat.size(); i++){
            reverse(mat[i]);
        }
    }
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        transpose(matrix, n);
        reverseRows(matrix);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna