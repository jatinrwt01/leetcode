class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string result = "";
        for(char ch:s){
            if(ch == '('){
                if(count>0){
                    result+=ch;
                }
                count++;
            } else{
                  count--;
                if(count>0){
                    result+=ch;
                }
            }
           
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna