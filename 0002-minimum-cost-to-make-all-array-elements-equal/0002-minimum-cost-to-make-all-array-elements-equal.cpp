class Solution {
public:
    long long minCost(vector<int>& nums) {
        int n=nums.size();
        bool alreq=true;
        for(int i=1; i<n; i++){
            if(nums[i] != nums[0]){
                alreq=false;
                break;
            }
        }
        if(alreq) return 0;
        unordered_map<int, pair<int,bool>>mp;
        long long ans=LLONG_MAX;
        int j=0;
        while(j<n){
            int i=j;
            while(i<n && nums[i]==nums[j]){
                i++;
            }
            int l=i-j;
            bool valid = (j<=n-2 && i-1>=1);
            if(l > mp[nums[j]].first){
                mp[nums[j]]={l,valid};
            }
            else if(l== mp[nums[j]].first){
                mp[nums[j]].second |= valid;
            }
            j=i;
        }

        for(auto it:mp){
            if(!it.second.second) continue;
            long long cost=1LL*it.first*(n-it.second.first);
            ans=min(ans, cost);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna