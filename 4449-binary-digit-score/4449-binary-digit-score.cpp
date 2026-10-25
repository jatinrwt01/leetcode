
class Solution {
private:
    int cntset(int n){
        int c=0;
        while(n){
            c+=n&1;
            n>>=1;
        }
        return c;
    }
public:
    int calculateScore(int a, int b) {
        int s1=cntset(a), s2=cntset(b);
        int sc=0;
        if(s1>=s2){
            sc=s1*s2;
        }else{
            sc=s2/s1;
        }
        return sc;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna