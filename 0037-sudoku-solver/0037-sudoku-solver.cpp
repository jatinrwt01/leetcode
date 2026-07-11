class Solution {
private:
    bool isValid(int r, int c, char d, vector<vector<char>>&b){
        for(int i=0; i<9; i++){
            if(b[i][c] == d){
                return false;
            }
        }
        for(int j=0; j<9; j++){
            if(b[r][j]== d){
                return false;
            }
        }
        int sr = (r/3)*3;
        int sc = (c/3)*3;
        for(int i=sr; i<sr+3; i++){
            for(int j=sc; j<sc+3; j++){
                if(b[i][j] == d){
                    return false;
                }
            }
        }
        return true;
    }

    bool helper(vector<vector<char>>&b){
        for(int i=0; i<b.size(); i++){
            for(int j=0; j<b[0].size(); j++){
                if(b[i][j] == '.'){
                    for(char dig = '1'; dig<='9'; dig++){
                        if(isValid(i, j, dig, b)){
                            b[i][j] = dig;
                            if(helper(b)){
                                return true;
                            }
                            b[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        helper(board);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna