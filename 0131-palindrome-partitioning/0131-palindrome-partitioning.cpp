class Solution {
private:
    bool isPalindrome(string s, int l, int r){
        while(l<=r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    void helper(string s, int i, vector<string>&p, vector<vector<string>>&ans){
            if(i == s.size()){
                ans.push_back(p);
                return;
            }
            for(int idx=i; idx<s.size(); idx++){
                if(isPalindrome(s, i, idx)){
                    p.push_back(s.substr(i, idx-i+1));
                    helper(s, idx+1, p, ans);
                    p.pop_back();
                }
            }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<string>partitions;
        vector<vector<string>>ans;
        helper(s,0,partitions, ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna