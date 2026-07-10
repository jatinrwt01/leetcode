class Solution {
private:
    bool isValid(int r, int c, int n, vector<string>&b){
        for(int row=r-1; row>=0; row--){
            if(b[row][c] == 'Q'){
                return false;
            }
        }
        
        int row = r-1, col=c-1;
        while(row>=0 && col>=0){
            if(b[row][col] == 'Q'){
                return false;
            }
            row--;
            col--;
        }

        row = r-1, col = c+1;
        while(row>=0 && col<n){
            if(b[row][col] == 'Q'){
                return false;
            }
            row--;
            col++;
        }
        return true;
    }

    void helper(int row, int n, vector<string>&b, vector<vector<string>>&ans){
        if(row == n){
            ans.push_back(b);
            return;
        }
        for(int col=0; col<n; col++){
            if(isValid(row, col, n, b)){
                b[row][col] = 'Q';
                helper(row+1, n, b, ans);
                b[row][col] = '.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n, string(n,'.'));
        vector<vector<string>>ans;
        helper(0, n, board, ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna