class Solution {
public:
    bool threeFibonacciSum(int n) {
        vector<long long>fibo = {0,1};
        while(fibo.back()<=n){
            int l=fibo.size();
            fibo.push_back(fibo[l-1]+fibo[l-2]);
        }
        for(int i=0; i<fibo.size()-2; i++){
            if(fibo[i]+fibo[i+1]+fibo[i+2] == n){
                return true;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna