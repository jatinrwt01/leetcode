class Solution {
public:
    bool sumGame(string num) {
        bool ans=true;
        int ls=0, rs=0, lq=0, rq=0;
        int n=num.size();
        for(int i=0; i<n/2; i++){
            if(num[i] == '?'){
                lq++;
            }else{
                ls+=(num[i]-'0');
            }
        }
        for(int i=n-1; i>=n/2; i--){
            if(num[i] == '?'){
                rq++;
            }else{
                rs+=(num[i]-'0');
            }
        }
        if((lq+rq)%2 == 1){
            return true;
        }else{
        int d=ls-rs;
        int qd=rq-lq;
        if(d == 9*qd/2){
            ans=false;
        }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna