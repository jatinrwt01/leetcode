class Solution {
private:
    int digitProduct(int n){
        int p=1;
        while(n>0){
            p*=n%10;
            n=n/10;
        }
        return p;
    }
public:
    int smallestNumber(int n, int t) {
        for(int i=n; i<n+10; i++){
            if(digitProduct(i)%t == 0){
                return i;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna