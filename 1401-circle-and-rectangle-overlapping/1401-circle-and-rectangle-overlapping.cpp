class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        bool overlap = false;
        int cx=max(x1, min(xCenter, x2));
        int cy=max(y1, min(yCenter, y2));
        int distx=xCenter-cx, disty=yCenter-cy;
        int dist=pow(distx,2)+pow(disty,2);
        if(dist<=pow(radius,2)){
            overlap = true;
        }
        return overlap;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna