class Solution {
private:
    int merge(int n1, int n2){
        string s1=to_string(n1);
        string s2 = to_string(n2);
        string res=s1+s2;
        return stoi(res);
    }
public:
    int minMergedInteger(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr;
        for(int i=0; i<n-1; i+=2){
            arr.push_back(merge(nums[i],nums[i+1]));
        }
        int ans=INT_MAX;
        for(int a:arr){
            ans=min(ans,a);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna