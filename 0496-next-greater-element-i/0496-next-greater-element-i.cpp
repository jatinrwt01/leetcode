class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      int n1=nums1.size(), n2=nums2.size();
      vector<int>ans(n1,0);
      for(int i=0; i<n1; i++){
        int nge=-1, j=0;
        while(j<n2 && nums1[i] != nums2[j]){
            j++;
        }
        for(int k=j+1; k<n2; k++){
        if(nums2[k]>nums2[j]){
            nge=nums2[k];
            break;
        }
        }
        ans[i]=nge;
      }
       return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna