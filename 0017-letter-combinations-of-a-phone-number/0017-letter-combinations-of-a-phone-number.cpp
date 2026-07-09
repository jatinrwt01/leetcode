class Solution {
private:
    void helper(string &s, int i, vector<string>&ans, string &str, unordered_map<char,string>&mp){
        if(i == s.size()){
        if(str.size() == s.size()){
            ans.push_back(str);
        }
            return;
        }
        string dig = mp[s[i]];
        for(int j=0; j<dig.size(); j++){
            str.push_back(dig[j]);
            helper(s, i+1, ans, str,mp);
            str.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string>mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        vector<string>ans;
        string str = "";
        helper(digits, 0, ans, str, mp);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna