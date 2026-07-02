class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int l=0, r=0, maxLen = 0;
        vector<int>freq (26,0);
        int maxFreq = 0;
        while(r<n){
            freq[s[r] - 'A']++;
            for(int f:freq){
                maxFreq = max(f,maxFreq);
            }
            while((r-l+1) - (maxFreq) > k){
                freq[s[l] - 'A']--;
                l++;
            }
            maxLen = max(r-l+1, maxLen);
            r++;
        }
        return maxLen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna