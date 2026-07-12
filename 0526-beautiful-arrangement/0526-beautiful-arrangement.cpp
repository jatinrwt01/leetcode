class Solution {
private:
    void helper(int i, int n, int &cnt, vector<bool>&used){
        if(i > n){
            cnt++;
            return;
        }
        for(int num =1; num<=n; num++){
            if(!used[num]){
                if(i % num == 0 || num%i == 0){
                    used[num] = true;
                    helper(i+1, n, cnt, used);
                    used[num] = false;
                }
            }
        }
    }   
public:
    int countArrangement(int n) {
        int cnt = 0;
        vector<bool>used(n, false);
        helper(1, n, cnt, used);
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna