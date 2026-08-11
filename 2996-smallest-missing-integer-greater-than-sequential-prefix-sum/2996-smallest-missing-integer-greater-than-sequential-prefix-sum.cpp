class Solution {
private:
    bool bs(int k, vector<int>&arr){
        int low=0, high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid] == k){
                return true;
            } else if(arr[mid]>k){
                high=mid-1;
            } else{
                low=mid+1;
            }
        }
        return false;
    }
public:
    int missingInteger(vector<int>& nums) {
        vector<int>temp(nums.begin(), nums.end());
        sort(temp.begin(), temp.end());
        int psum=nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]+1){
                psum+=nums[i];
            } else{
                break;
            }
        }
        while(bs(psum, temp)){
            psum++;
        }
        return psum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna