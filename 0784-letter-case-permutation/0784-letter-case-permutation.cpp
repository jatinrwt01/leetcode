class Solution {
private:
    void helper(string s, int i, string &str, vector<string>&ans){
        if(i == s.size()){
            ans.push_back(str);
            return;
        }
        if(isdigit(s[i])){
            str.push_back(s[i]);
            helper(s, i+1, str, ans);
            str.pop_back();
        } else if(isalpha(s[i])){
            str.push_back(tolower(s[i]));
            helper(s, i+1, str, ans);
            str.pop_back();
            str.push_back(toupper(s[i]));
            helper(s, i+1, str, ans);
            str.pop_back();
        }
    }
public:
    vector<string> letterCasePermutation(string s) {
        string str="";
        vector<string>ans;
        helper(s, 0, str, ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna