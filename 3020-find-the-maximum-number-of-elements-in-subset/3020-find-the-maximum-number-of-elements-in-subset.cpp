class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long,int> mp;
        for(long long num:nums){
            mp[num]++;
        }
        int ans = 0;
        for(auto it:mp){
            long long num = it.first;
            if(num == 1) continue;
            int len = 0;
            while(mp.find(num) != mp.end()){
                if(mp[num] >=2){
                    len = len+2;
                    num = num*num;
                } else{
                    len++;
                    break;
                }
            }
            if(len%2 == 0){
                len--;
            }
            ans = max(len,ans);
        }
         int ones = mp[1];
            if (ones % 2 == 0){
             ones--;
            }   
            ans = max(ans, ones);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna