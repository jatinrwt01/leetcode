class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size(), ts=0;
        for(int n:nums){
            ts+=n;
        }
        int target=ts-x, maxlen=0, cs=0;
        int l=0, r=0;
        while(r<n){
            cs+=nums[r];
            if(target<0){
                return -1;
            }
            while(cs>target){
                cs-=nums[l];
                l++;
            }
            if(cs == target){
            maxlen=max(maxlen, (r-l+1));
            }
            r++;
        }
        if(target == 0){
            return n;
        }
        return maxlen==0?-1:n-maxlen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna