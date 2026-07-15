class Solution {
private:
    int sumEven(int n){
        return n*(n+1);
    }

    int sumOdd(int n){
        return n*n;
    }
public:
    int gcdOfOddEvenSums(int n) {
        int s1 = sumEven(n);
        int s2 = sumOdd(n);
        return gcd(s1,s2); 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna