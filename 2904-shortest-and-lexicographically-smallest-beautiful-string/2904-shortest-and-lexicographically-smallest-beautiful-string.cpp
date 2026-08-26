class Solution {
private:
    string lexismall(string s1, string s2){
        int i=0, j=0, n1=s1.size(),n2=s2.size();
        while(i<n1 && j<n2){
            if(s1[i] == '0' && s2[j] == '1'){
                return s1;
            } else if(s1[i] == '1' && s2[j] == '0'){
                return s2;
            }
            i++;
            j++;
        }
        return s1;
    }
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l=0, r=0, n=s.size();
        int ones=0;
        string curr="";
        while(r<n){
            if(s[r] == '1'){
                ones++;
            }
            if(ones>=k){
            while(ones>=k){
                if(curr=="" || r-l+1 < curr.length()){
                    curr=s.substr(l,(r-l+1));
                } else if(r-l+1 == curr.length()){
                    curr=lexismall(curr, s.substr(l,(r-l+1)));
                }
                if(s[l] == '1'){
                    ones--;
                }
                l++;
            }
        }
            r++;
        }
        return curr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna