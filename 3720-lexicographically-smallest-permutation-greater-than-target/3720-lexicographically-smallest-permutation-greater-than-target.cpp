class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n=s.size();
        vector<int>freq(26,0);
        for(int c:s){
            freq[c-'a']++;
        }
        for(int i=n-1; i>=0; i--){
            vector<int>temp(freq.begin(), freq.end());
            bool p=true;
            for(int j=0; j<i; j++){
                int c=target[j]-'a';
                if(temp[c] == 0){
                    p=false;
                    break;
                }
                temp[c]--;
            }
            if(!p){
                continue;
            }
            int ch=target[i]-'a';
            int b=-1;
            for(int c=ch+1; c<26; c++){
                if(temp[c]>0){
                    b=c;
                    break;
                }
            }
            if(b==-1){
                continue;
            }
            string ans=target.substr(0, i);
            ans+=char(b+'a');
            temp[b]--;
            for(int c=0; c<26; c++){
                while(temp[c]>0){
                    ans+=char(c+'a');
                    temp[c]--;
                }
            }
            return ans;
        }
        return "";
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna