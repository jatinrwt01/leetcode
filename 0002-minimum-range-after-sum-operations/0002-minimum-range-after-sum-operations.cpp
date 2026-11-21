class Solution {
public:
    int minRange(int a, int b, int c) {
        int mn=min(a,min(b,c));
        int mx=max(a,max(b,c));
        int mid=a+b+c-mx-mn;
        return min(mid,(mx-mn));
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna