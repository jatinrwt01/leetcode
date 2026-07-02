class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size(), l=0, r=0, maxFruits=0;
        unordered_map<int, int>freq;
        while(r<n){
            freq[fruits[r]]++;
            while(freq.size() > 2){
                freq[fruits[l]]--;
                if(freq[fruits[l]] == 0){
                    freq.erase(fruits[l]);
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