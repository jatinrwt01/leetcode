class Solution {
private:
    void helper(int o, int c, string &str, vector<string>&ans){
        if(o == 0 && c == 0){
            ans.push_back(str);
            return;
        }
        if(o>0){
            str.push_back('(');
            helper(o-1, c, str, ans);
            str.pop_back();
        }
        if(c>0 && c>o){
            str.push_back(')');
            helper(o, c-1, str, ans);
            str.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        string str="";
        vector<string>ans;
        helper(n, n, str, ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna