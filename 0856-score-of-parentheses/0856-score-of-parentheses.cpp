class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                st.push(0);
            }else{
                int sc=0;
                int inn = st.top();
                st.pop();
                if(inn == 0){
                    sc=1;
                }else{
                    sc=2*inn;
                }
                int ps=st.top();
                ps+=sc;
                st.pop();
                st.push(ps);
            }
        }
        return st.top();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna