class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
         int ans = nums[0]+nums[1]+nums[2];
        for(int i=0; i<n-2; i++){
            int l = i+1;
            int h = n-1;
            while(l<h){
                int sum = nums[i]+nums[l]+nums[h];
                if(sum == target) {
                    ans = sum;
                    return ans;
                } else if(sum>target){
                     if(abs(sum-target) < abs(target-ans)){
                        ans = sum;
                     }
                     h--;
                }else {
                    if(abs(sum-target) < abs(target-ans)){
                        ans = sum;
                     }
                    l++;
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna