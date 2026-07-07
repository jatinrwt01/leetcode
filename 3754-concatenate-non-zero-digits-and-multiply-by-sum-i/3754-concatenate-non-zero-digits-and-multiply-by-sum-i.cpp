class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans = 0;
        long long temp = 0;
        long long s = 0;
        while(n>0){
            int d = n%10;
            if(d != 0){
                temp = temp*10 + d;
                s+=d;
            }
            n=n/10;
        }
        while(temp>0){
            int d = temp%10;
            ans = ans*10 + d;
            temp=temp/10;
        }
        return ans*s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna