class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st(nums.begin(), nums.end());
        int psum=nums[0];
        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1]+1){
                psum+=nums[i];
            }else{
                break;
            }
        }
        while(st.find(psum) != st.end()){
            psum++;
        }
        return psum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna