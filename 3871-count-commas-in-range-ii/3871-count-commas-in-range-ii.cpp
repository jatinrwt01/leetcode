class Solution {
public:
    long long countCommas(long long n) {
        long long c=0;
        if(n<1000){
            return 0;
        }
        for(long long p=1000; p<=n; p*=1000){
            c+=(n-p+1);
        }
        return c;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna