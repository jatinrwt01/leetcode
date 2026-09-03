class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size(), smo=INT_MAX;
        for(int i=0; i<n; i++){
            if(nums1[i]%2 == 1){
                smo=min(smo, nums1[i]);
            }
        }
        for(int i=0; i<n; i++){
            if(nums1[i]%2 == 0 && smo!= INT_MAX && smo>=nums1[i]){
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna