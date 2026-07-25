class Solution {
public:
    int maxProduct(int n) {
        vector<int>digits;
        while(n>0){
            int d = n%10;
            digits.push_back(d);
            n = n/10;
        }
        int m1=INT_MIN, m2= INT_MIN;
        for(int d:digits){
            if(d>m1){
                m2=m1;
                m1 = d;
            }
            else if(d>m2){
                m2 = d;
            }
        }
        return m1*m2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna