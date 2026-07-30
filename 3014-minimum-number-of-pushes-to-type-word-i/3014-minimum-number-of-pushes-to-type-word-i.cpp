class Solution {
public:
    int minimumPushes(string word) {
        int p =0;
        int n = word.size();
        if(n<=8){
            p= n;
        } else if(n<=16){
            int rem = n-8;
            p = 8+2*rem;
        } else if(n<=24){
            int rem=n-16;
            p =24+3*rem;
        } else{
            int rem=n-24;
            p = 48+4*rem;
        }
        return p;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna