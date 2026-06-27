class Solution {
private:
    int maxfreq(vector<int>&arr){
        int m = INT_MIN;
        for(int a:arr){
            m = max(a,m);
        }
        return m;
    }
    int minfreq(vector<int>&arr){
        int m= INT_MAX;
        for(int a:arr){
            if(a>0) m = min(a,m);
        }
        return m;
    }
public:
    int beautySum(string s) {
        int n = s.size();
        int sum=0;
        for(int i=0; i<n; i++){      
              vector<int>freq(26,0);
            for(int j=i; j<n; j++){
                freq[s[j] - 'a']++;
                int maxF = maxfreq(freq);
                int minF = minfreq(freq);
                sum+=(maxF-minF);
            }
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna