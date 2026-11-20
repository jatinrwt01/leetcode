class Solution {
private:
    void orangeBFS(vector<vector<int>>&grid,queue<pair<int, int>>&q, int &ans){
        vector<int>dx={-1,0,1,0};
        vector<int>dy={0,1,0,-1};
        int m=grid.size(),n=grid[0].size();
        while(!q.empty()){
            int s=q.size();
            bool changed=false;
            for(int i=0; i<s; i++){
                auto[r,c] = q.front();
                q.pop();
                for(int k=0; k<4; k++){
                int I=r+dx[k];
                int J=c+dy[k];
                if(I>=0 && I<m && J>=0 && J<n){
                    if(grid[I][J] == 1){
                        grid[I][J]=2;
                        q.push({I,J});
                        changed=true;
                    }
                }
            }
            }
            if(changed){
                ans++;
            }
        }
    }
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        int f=0;
        queue<pair<int,int>>q;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] ==1) f++;
                if(grid[i][j] == 2) {
                    q.push({i,j});
                }
            }
        }
        if(f==0) return 0;
        if(q.empty()) return -1;
        int ans=0;
        orangeBFS(grid,q,ans);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] ==1){
                    return -1;
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna