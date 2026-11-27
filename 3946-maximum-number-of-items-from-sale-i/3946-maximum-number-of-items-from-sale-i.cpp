class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n=items.size();
        vector<int>free(n,0);
        int minPrice=INT_MAX;
        for(int i=0; i<n; i++){
            minPrice=min(minPrice, items[i][1]);
            int f=items[i][0];
            int c=0;
            for(int j=0; j<n; j++){
                if(i==j) continue;
                if(items[j][0] % f == 0){
                    c++;
                }
            }
            free[i]=c;
        }
        vector<vector<int>>dp(n+1, vector<int>(budget+1,0));
        for(int i=0; i<=budget; i++){
            dp[0][i]=i/minPrice;
        }
        for(int i=1; i<=n; i++){
            for(int j=0; j<=budget; j++){
                int take=INT_MIN, skip=INT_MIN;
                int p=items[i-1][1];
                if(p<=j){
                    take=1+free[i-1]+dp[i-1][j-p];
                }
                skip=dp[i-1][j];
                dp[i][j]=max(take,skip);
            }
        }
        return dp[n][budget];
    }
};



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna