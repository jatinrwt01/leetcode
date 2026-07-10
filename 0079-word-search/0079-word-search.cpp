class Solution {
private:
    bool helper(int r, int c, int i,vector<vector<char>>&b, string &word, vector<vector<bool>>&vis){
        if(r<0 || r>=b.size() || c<0 || c>=b[0].size()){
            return false;
        }
        if(vis[r][c] || b[r][c] != word[i]){
            return false;
        }
        if(i == word.size()-1){
            return true;
        }
        if(b[r][c] == word[i] && !vis[r][c]){
            vis[r][c] = true;
            if(r > 0){
                if(helper(r-1, c, i+1, b, word, vis)){
                    return true;
                }
            }
            if(r < b.size()-1){
                if(helper(r+1, c, i+1, b, word, vis)){
                    return true;
                }
            }
            if(c>0){
                if(helper(r, c-1, i+1, b, word, vis)){
                    return true;
                }
            }
            if(c<b[0].size()-1){
                if(helper(r, c+1, i+1, b, word, vis)){
                    return true;
                }
            }
            vis[r][c] = false;
        }
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>>vis(m, vector<bool>(n,false));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j] == word[0]){
                    if(helper(i, j, 0,board, word, vis)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna