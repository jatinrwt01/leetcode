class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n=nums.size(), mxlen=0;
        for(int i=0; i<n; i++){
            long long p=1, g=0, l=1;
            for(int j=i; j<n; j++){
                p*=nums[j];
                if(p>25200) break;
                g=gcd(g,nums[j]);
                l=lcm(l,nums[j]);
                if(p==g*l){
                    mxlen=max(mxlen, j-i+1);
                }
            }
        }
        return mxlen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna