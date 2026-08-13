class Solution {
public:
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
        int aliceScore=0, bobScore=0, n=aliceValues.size();
        vector<pair<int,int>>stones;
        for(int i=0; i<n; i++){
            stones.push_back({aliceValues[i]+bobValues[i], i});
        }
        sort(stones.rbegin(), stones.rend());
        for(int i=0; i<n; i++){
            if(i%2 == 0){
                aliceScore+=aliceValues[stones[i].second];
            } else{
                bobScore+=bobValues[stones[i].second];
            }
        }
        if(aliceScore > bobScore){
            return 1;
        } else if(aliceScore<bobScore){
            return -1;
        } else{
            return 0;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna