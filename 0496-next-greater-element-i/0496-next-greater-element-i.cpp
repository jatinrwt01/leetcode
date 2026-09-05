class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(), n2=nums2.size();
        unordered_map<int,int>mp;
        stack<int>st;
        vector<int>ans(n1,0);
        mp[nums2[n2-1]]=-1;
        for(int i=n2-1; i>=0; i--){
            if(!st.empty() && st.top()<nums2[i]){
                while(!st.empty() && st.top()<nums2[i]){
                    st.pop();
                }
                if(st.empty()){
                mp[nums2[i]]=-1;
                }else{
                    mp[nums2[i]]=st.top();
                }
            } else if(!st.empty() && st.top()>nums2[i]){
                mp[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }

        for(int i=0; i<n1; i++){
            ans[i]=mp[nums1[i]];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna