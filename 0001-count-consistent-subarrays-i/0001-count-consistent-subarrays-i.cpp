class Solution {
private:
    bool isCon(vector<int>&arr){
        int mn=INT_MAX;
        int bwa=INT_MAX;
        for(int x:arr){
            mn=min(mn,x);
            bwa=bwa&x;
        }
        return bwa==mn;
    }
public:
    int countConsistent(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for(int i=0; i<n; i++){
            vector<int>sub;
            for(int j=i; j<n; j++){
                sub.push_back(nums[j]);
                if(isCon(sub)) ans++;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna