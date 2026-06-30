class Solution {
private:
    bool noDuplicates(string s, int i, int j){
        vector<int>v(256,0);
        for(int idx=i; idx<=j; idx++){
            v[s[idx]]++;
        }
        for(int num:v){
            if(num > 1) return false;
        }
        return true;
    }
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, r=0;
        int ans = 0;
        while(r<s.size()){
            if(noDuplicates(s,l,r)){
                ans = max(ans,(r-l+1));
                r++;
            } else{
                l++;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna