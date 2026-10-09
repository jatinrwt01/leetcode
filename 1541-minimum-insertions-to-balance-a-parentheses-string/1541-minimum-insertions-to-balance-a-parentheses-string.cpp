class Solution {
public:
    int minInsertions(string s) {
        int ans=0;
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }else{
                if(i+1<s.size() && s[i+1] == ')'){
                    i++;
                }else{
                    ans++;
                }
                if(st.empty()){
                    ans++;
                }else{
                    st.pop();
                }
            }
        }
        ans+=2*st.size();
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna