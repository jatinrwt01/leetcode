class Solution {
public:
    int countStaircase(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        for(int i=0; i<n; i++){
            unordered_map<int,int>mp;
            vector<int>dists;
            for(int j=i; j<n; j++){
                if(mp[nums[j]] == 0){
                    dists.push_back(nums[j]);
                }
                mp[nums[j]]++;
                int len=j-i+1,s=dists.size();
                if(len!=s*(s+1)/2){
                    continue;
                }
                bool v=true;
                for(int k=0; k<s; k++){
                    if(mp[dists[k]] != k+1){
                        v=false;
                        break;
                    }
                }
                if(v){
                    ans++;
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna