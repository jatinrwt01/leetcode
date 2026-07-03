class Solution {
private:
    int helper(string s, int k){
        int n = s.size(), l=0, r=0, unique = 0, ans=0;
        vector<int>v(3,0);
        while(r<n){
            if(v[s[r]- 'a'] == 0){
                unique++;
            }
            v[s[r]-'a']++;
            while(unique > k){
                v[s[l] - 'a']--;
                if(v[s[l] - 'a'] == 0){
                    unique--;
                }
                l++;
            }
            if(unique <= k){
                ans+=(r-l+1);
            }
            r++;
        }
        return ans;
    }
public:
    int numberOfSubstrings(string s) {
        int x = helper(s, 3);
        int y = helper(s,2);
        return x-y;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna