class Solution {
private:
    void dfs(vector<vector<int>>&temp, int i, int j){
        int m=temp.size(), n=temp[0].size();
        temp[i][j]=0;
        vector<int>dx={-1,0,1,0};
        vector<int>dy={0, 1,0,-1};
        for(int k=0; k<4; k++){
            int newi=i+dx[k];
            int newj=j+dy[k];
            if(newi>=0 && newi<m && newj>=0 && newj<n){
                if(temp[newi][newj] == 1){
                    dfs(temp, newi, newj);
                }
            }
        }
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        vector<vector<int>>temp=grid;
        for(int i=0; i<m; i++){
            if(temp[i][0] == 1){
                dfs(temp, i, 0);
            }
            if(temp[i][n-1] == 1){
                dfs(temp, i, n-1);
            }
        }
        for(int j=0; j<n; j++){
            if(temp[0][j] == 1){
                dfs(temp, 0,j);
            }
            if(temp[m-1][j] == 1){
                dfs(temp,m-1,j);
            }
        }
        int nolcit=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(temp[i][j] == 1){
                    nolcit++;
                }
            }
        }
        return nolcit;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna