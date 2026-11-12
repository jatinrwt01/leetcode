class Solution {
private:
    bool check(vector<int>&arr){
        bool inc=true, dec=true;
        int n=arr.size();
        if(n==1) return true;
        for(int i=0; i<n-1; i++){
            if(arr[i+1]<=arr[i]){
                inc=false;
                break;
            }
        }
        for(int i=0; i<n-1; i++){
            if(arr[i]<=arr[i+1]){
                dec=false;
                break;
            }
        }
        return inc||dec;
    }
public:
    int longestMonotonicSubarray(vector<int>& nums) {
            int n=nums.size();
            int ans=0;
            for(int i=0; i<n; i++){
                vector<int>sub;
                for(int j=i; j<n; j++){
                    sub.push_back(nums[j]);
                    int len=j-i+1;
                    if(check(sub)){
                        ans=max(ans, len);
                    }
                }
            }        
            return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna