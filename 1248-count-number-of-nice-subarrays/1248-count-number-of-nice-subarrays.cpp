class Solution {
private:
    int atMostK(vector<int> nums, int k){
        int l=0, r=0, n=nums.size(), odds=0, ans=0;
        while(r<n){
            if(nums[r]%2 != 0){
                odds++;
            }
            while(odds > k){
                if(nums[l]%2 != 0){
                    odds--;
                }
                l++;
            }
            if(odds <= k){
                ans+=(r-l+1);
            }
            r++;
        }
        return ans;
    }

    int atMostKminOne(vector<int> nums, int k){
        int l=0, r=0, n=nums.size(), odds=0, ans=0;
        while(r<n){
            if(nums[r]%2 != 0){
                odds++;
            }
            while(odds > k-1){
                if(nums[l]%2 != 0){
                    odds--;
                }
                l++;
            }
            if(odds <= k-1){
                ans+=(r-l+1);
            }
            r++;
        }
        return ans;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int x= atMostK(nums,k);
        int y= atMostKminOne(nums,k);
        return x-y;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna