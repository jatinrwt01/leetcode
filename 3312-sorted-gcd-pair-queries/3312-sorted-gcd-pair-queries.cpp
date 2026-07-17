class Solution {
private:
    int bs(vector<long long>&pref, long long target){
        int low=1, high = pref.size()-1;
        int ans=high;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(pref[mid]>target){
                ans = mid;
                high = mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int n = nums.size();
        int q = queries.size();
        int mx = INT_MIN;
        for(int num:nums){
            mx = max(mx, num);
        }
        vector<int>freq(mx+1, 0);
        for(int num:nums){
            freq[num]++;
        }
        
        vector<long long>gcdCnt(mx+1, 0);
        for(int g=mx; g>=1; g--){
            long long cnt = 0;
            for(int m=g; m<=mx; m+=g){
                cnt+=freq[m];
            }
            gcdCnt[g] = cnt*(cnt-1)/2;
            for(int m=2*g; m<=mx; m+=g){
                gcdCnt[g]= gcdCnt[g]-gcdCnt[m];
            }
        }
        vector<long long>pref(mx+1, 0);
        for(int g=1; g<=mx; g++){
            pref[g] = pref[g-1]+gcdCnt[g];
        }
        vector<int>ans(q, 0);
        for(int i=0; i<q; i++){
            ans[i] = bs(pref, queries[i]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna