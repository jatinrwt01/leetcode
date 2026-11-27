class Solution {
private:
    int helper(int n, int b, vector<vector<int>>&items, int mp,vector<int>&free,vector<vector<int>>&dp){
        if(n==0){
            return b/mp;
        }
        if(dp[n-1][b]!=-1){
            return dp[n-1][b];
        }
        int take=INT_MIN, skip=INT_MIN;
        if(items[n-1][1]<=b){
            take=1+free[n-1]+helper(n-1, b-items[n-1][1], items, mp, free,dp);
        }
        skip=helper(n-1, b, items, mp, free,dp);
        return dp[n-1][b]=max(take,skip);
    }
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
        vector<vector<int>>dp(1001, vector<int>(1501,-1));
        return helper(n, budget, items, minPrice, free,dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna