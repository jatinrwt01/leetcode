class Solution {
private:
    long long ans = 0;
    void divide(vector<int>&arr, int low, int high){
        if(low>=high) return;
        int mid = low+(high-low)/2;
        divide(arr, low, mid);
        divide(arr,mid+1, high);
        conquer(arr, low, mid, high);
    }

    void conquer(vector<int>&arr, int low, int mid, int high){
        int i= low, j=mid+1;
        vector<int>temp;
        while(i<=mid && j<=high){
            if(arr[j] > arr[i]){
                ans+=(high-j)+1;
                temp.push_back(arr[i]);
                i++;
            } else{
                temp.push_back(arr[j]);
                j++;
            }
        }
          while(i<=mid){
                temp.push_back(arr[i]);
                i++;
            }
            while(j<=high){
                temp.push_back(arr[j]);
                j++;
            }
            for(int i=low; i<=high; i++){
                arr[i] = temp[i-low];
            }
    }
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                nums[i] = 1;
            } else{
                nums[i] = -1;
            }
        }
        vector<int> preSum(n+1, 0);
        for(int i=1; i<=n; i++){
            preSum[i] = preSum[i-1] + nums[i-1];
        }
        divide(preSum, 0, n);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna