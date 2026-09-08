class Solution {
public:
    int countCommas(int n) {
        int cnt=0;
        int ld=n%10;
        int ans=0;
        int num=n;
        while(n>0){
            cnt++;
            n=n/10;
        }
        if(cnt<4){
            return 0;
        } else if(cnt==4){
            ld=num-1000;
            ans= ld+1;
        } else if(cnt==5){
            ld=num-10000;
            ans = 9000+ld+1;
        } else{
            ld=num-100000;
            ans=9000+90000+ld+1;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna