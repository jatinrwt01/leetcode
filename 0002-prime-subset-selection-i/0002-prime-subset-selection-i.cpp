class Solution {
private:
    bool isPrime(int n){
        if(n<2) return false;
        for(int i=2; i*i<=n; i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
public:
    vector<int> maxPrimes(int n, int s) {
        vector<int>res;
        int primeSum=0;
        for(int i=2; i<=n; i++){
            if(isPrime(i)){
                if(primeSum+i > s){
                    break;
                }
                primeSum+=i;
                res.push_back(i);
            }
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna