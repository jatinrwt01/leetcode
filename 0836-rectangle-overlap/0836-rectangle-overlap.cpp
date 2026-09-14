class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        bool c1=true, c2=true, c3=true, c4=true;
        if(rec1[2]<=rec2[0]){
            c1=false;
        }
        if(rec2[2]<=rec1[0]){
            c2=false;
        }
        if(rec1[3]<=rec2[1]){
            c3=false;
        }
        if(rec2[3]<=rec1[1]){
            c4=false;
        }
        if(!c1||!c2||!c3||!c4){
            return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna