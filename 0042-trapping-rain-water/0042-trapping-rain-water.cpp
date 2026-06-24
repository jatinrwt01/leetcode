class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lm(n,0);
        vector<int> rm(n,0);
        lm[0] = height[0];
        rm[n-1] = height[n-1];
        for(int i=1; i<n; i++){
            lm[i] = max(height[i], lm[i-1]);
        }
        for(int i=n-2; i>=0; i--){
            rm[i] = max(height[i], rm[i+1]);
        }
        int trapped = 0;
        for(int i=0; i<n; i++){
            trapped += (min(lm[i], rm[i])-height[i]);
        }
        return trapped;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna