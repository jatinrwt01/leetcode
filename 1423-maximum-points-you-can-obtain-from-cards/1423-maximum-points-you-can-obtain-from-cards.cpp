class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ls=0, rs=0;
        int ms = 0;
        int s=0;
        int l=0, r=cardPoints.size()-1;
         for(int i=l; i<k; i++){
            ls+=cardPoints[i];
            s=ls+rs;
            ms =max(ms,s);
         }
         for(int i=k-1; i>=l; i--){
            ls-=cardPoints[i];
            rs+=cardPoints[r];
            r--;
            s=ls+rs;
            ms=max(ms,s);
         }
        return ms;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna