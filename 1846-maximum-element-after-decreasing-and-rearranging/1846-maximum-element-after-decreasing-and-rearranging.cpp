class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        if(arr[0]> 1){arr[0] = 1;}
        int i = 1;
        while(i<n){
            abs(arr[i] - arr[i-1]) <= 1 ? arr[i] = arr[i] : arr[i] = arr[i-1]+1;
            i++;
        }
       return arr[n-1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna