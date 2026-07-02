class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size(), l=0, r=0, maxFruits=0, unique=0;
        vector<int>freq(n,0);
        while(r<n){
            if(freq[fruits[r]] == 0){
                unique++;
            }
            freq[fruits[r]]++;
            while(unique > 2){
                freq[fruits[l]]--;
                if(freq[fruits[l]] == 0){
                    unique--;
                }
                l++;
            }
            maxFruits = max(maxFruits, (r-l+1));
            r++;
        }
        return maxFruits;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna