class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        string t = "1"+s+"1";
        int n = s.size()+2;
        int ones =0;
        for(char ch:s){
            if(ch == '1') ones++;
        }
        vector<pair<char, int>>v;
        int j=0;
        for(int i=0; i<n-1; i++){
            if(t[i+1] != t[i]){
                v.push_back({t[i], (i-j+1)});
                j=i+1;
            }
        }
          v.push_back({t[n-1], (n-j)});
          int segs = v.size();
          int ans = 0;
          int maxans = 0;
          for(int i=1; i<segs-1; i++){
            if(v[i].first == '1' && v[i-1].first == '0' && v[i+1].first == '0'){
                ans = v[i-1].second + v[i+1].second;
                maxans = max(ans,maxans);
            }
          }
        return maxans+ones;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna