class Solution {
private:
    void helperDFS(vector<vector<int>>&image, vector<vector<int>>&vis, int i, int j, int color, int ic){
        int m=image.size(), n=image[0].size();
        vis[i][j]=1;
        if(i>0){
            if(!vis[i-1][j]){
                if(image[i-1][j] == ic){
                    image[i-1][j] = color;
                    helperDFS(image, vis, i-1, j, color, ic);
                }
            }
        }
        if(j>0){
            if(!vis[i][j-1]){
                if(image[i][j-1] == ic){
                    image[i][j-1] = color;
                    helperDFS(image, vis, i, j-1, color, ic);
                }
            }
        }
        if(i<m-1){
            if(!vis[i+1][j]){
                if(image[i+1][j] == ic){
                    image[i+1][j] = color;
                    helperDFS(image, vis, i+1, j, color, ic);
                }
            }
        }
        if(j<n-1){
            if(!vis[i][j+1]){
                if(image[i][j+1] == ic){
                    image[i][j+1] = color;
                    helperDFS(image, vis, i, j+1, color, ic);
                }
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int ic=image[sr][sc];
        int m=image.size(), n=image[0].size();
        vector<vector<int>>vis(m, vector<int>(n,0));
        vis[sr][sc]=1;
        image[sr][sc]=color;
        helperDFS(image, vis, sr, sc, color, ic);
        return image;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna