class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& locked, int k) {
        unordered_set<int>notinplace;
        int n=nums.size(), u=0, s=0;
         for(int i=0; i<n-1; i++){
            int mx=INT_MIN;
            for(int j=0; j<=i; j++){
                mx= max(mx,nums[j]);
            }
            if(mx>i+1){
                notinplace.insert(i);
                notinplace.insert(i+1);
            }
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]>nums[j]){
                    s++;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(notinplace.find(i)!=notinplace.end()){
                if(locked[i] == 1){
                    locked[i]=0;
                    u++;
                }
            }
            if(u>k) return -1;
        }
        return s+u;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna