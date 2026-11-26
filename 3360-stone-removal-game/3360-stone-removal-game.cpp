class Solution {
public:
    bool canAliceWin(int n) {
        int turn =0; //0=alice, 1=bob
        int r=10;
        while(n>=r){
            n-=r;
            r--;
            turn=!turn;
        }
    return turn;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna