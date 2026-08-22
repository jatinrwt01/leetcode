class Solution {
public:
    bool checkDivisibility(int n) {
        int ds=0, dp=1, num=n;
        while(n>0){
            int d=n%10;
            ds+=d;
            dp*=d;
            n/=10;
        }
    return num%(ds+dp)==0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna