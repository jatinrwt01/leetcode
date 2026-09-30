class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n = seq.size();
        int depth=0;
        vector<int>ans(n,-1);
        for(int i=0; i<n; i++){
            if(seq[i] == '('){
                depth++;
                if(depth%2 == 0){
                    ans[i]=0;
                }else{
                    ans[i]=1;
                }
            }else{
                if(depth%2 == 0){
                    ans[i]=0;
                }else{
                    ans[i]=1;
                }
                depth--;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna