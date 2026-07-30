class Solution {
public:
    int minimumPushes(string word) {
        int p=0;
        vector<int>freq(26,0);
        for(int ch:word){
            freq[ch-'a']++;
        }
        sort(freq.begin(), freq.end());
        reverse(freq.begin(), freq.end());
        for(int i=0; i<26; i++){
            if(freq[i] == 0){
                break;
            }else{
                int cost =(i/8)+1;
                p+=cost*freq[i];
            }
        }
        return p;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna