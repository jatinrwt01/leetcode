class Solution {
public:
    long long minimumMaxValue(int n, int index, int value) {
        if(value==1){
            if(n==1){
                return 1;
            }else{
                return -1;
            }
        }
        int f=2;
        if(value%2 ==1){
            f=value;
            for(int i=3; i<=value/i; i+=2){
                if(value%i == 0){
                    f=i;
                    break;
                }
            }
        }
        long long ml=(value-f)/2;
        if(index>ml) return -1;
        long long r=n-index-1;
        if(r==0) return value;
        if(value%2==0){
            return 1LL*value+2*r;
        }
        return 1LL*value+f+2*(r-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna