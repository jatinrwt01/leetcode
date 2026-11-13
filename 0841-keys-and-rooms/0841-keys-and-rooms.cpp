class Solution {
private:
    void dfs(int room, vector<int>&vis, vector<vector<int>>&rooms){
        vis[room]=1;
        for(auto r:rooms[room]){
            if(!vis[r]){
                dfs(r, vis, rooms);
            }
        }
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>vis(n,0);
        vis[0]=1;
        dfs(0, vis, rooms);
        for(int i=0; i<n; i++){
            if(vis[i] == 0){
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna