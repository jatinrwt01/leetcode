class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        int l1=nums[0], l2=nums[1], n=nums.size();
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i=2; i<n; i++){
            if(l1>l2){
                arr1.push_back(nums[i]);
                l1=nums[i];
            } else{
                arr2.push_back(nums[i]);
                l2=nums[i];
            }
        }
        for(int i=0; i<arr2.size();i++){
            arr1.push_back(arr2[i]);
        }
        return arr1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna