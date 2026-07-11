class Solution {
private:
    bool isValid(string s){
        if(s.size() > 1){
            if(s[0] == '0') return false;
        }
        int n = stoi(s);
        if(n < 0 || n>255){
            return false;
        }
        return true;
    }
    void helper(string s, int i, int segs, string &ip, vector<string>&ans){
        if(segs == 4){
            if(i == s.size()){
                ip.pop_back();
                ans.push_back(ip);
            }
            return;
        }
        for(int len=1; len<=3; len++){
            if(len+i > s.size()){
                continue;
            }
            string sub = s.substr(i, len);
            if(isValid(sub)){
                int l = ip.size();
                ip.append(sub);
                ip.push_back('.');
                helper(s, i+len, segs+1, ip, ans);
                ip.resize(l);
            }
        }
    }
public:
    vector<string> restoreIpAddresses(string s) {
        string ip="";
        vector<string>ans;
        helper(s, 0, 0, ip, ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna