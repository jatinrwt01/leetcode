class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        int n1 = 0, n2=0, lo=low, hi=high;
        while(lo>0){
            n1++;
            lo=lo/10;
        }
         while(hi>0){
            n2++;
            hi=hi/10;
        }
        string s="123456789";
        for(int i=n1; i<=n2; i++){
            for(int j=0; j<=(9-i); j++){
                int n = stoi(s.substr(j, i));
                if(n>=low && n<=high){
                    ans.push_back(n);
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna