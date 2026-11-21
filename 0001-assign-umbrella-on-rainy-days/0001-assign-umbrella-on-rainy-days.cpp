class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n = rain.size();
        vector<string> ans(n);
        if(n == 1){
            if(rain[0] == 0){
                return {"None"};
            }else if(rain[0] == 1){
                return {"Bob"};
            }
        }
        int a =0, b=0;
        for(int i=0; i<n-1; i++){
            if(rain[i] == 0){
                ans[i] = "None";
            }else if(rain[i+1]==0){
                ans[i]="Bob";
                b++;
            }else{
                if(a>b){
                    ans[i]="Bob";
                    b++;
                }else{
                    ans[i]="Alice";
                    a++;
                }
            }
        }
        if(rain[n-1] == 0){
            ans[n-1]="None";
        }else{
            ans[n-1]="Bob";
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna