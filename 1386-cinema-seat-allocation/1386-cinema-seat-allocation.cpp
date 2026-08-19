class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, unordered_set<int>>mp;
        int m=reservedSeats.size(), ans=0;
        for(int i=0; i<m; i++){
            mp[reservedSeats[i][0]].insert(reservedSeats[i][1]);
        }
        for(auto it:mp){
            int r=it.first;
            unordered_set<int>st=it.second;
            bool first=true, second=true, third=true;
            for(int i=2; i<=5; i++){
                if(st.find(i)!=st.end()){
                    first=false;
                    break;
                }
            }
            for(int i=4; i<=7; i++){
                if(st.find(i)!=st.end()){
                    second=false;
                    break;
                }
            }
            for(int i=6; i<=9; i++){
                if(st.find(i)!=st.end()){
                    third=false;
                    break;
                }
            }
            if(first&&third){
                ans+=2;
            } else if(first||second||third){
                ans+=1;
            }
        }
        ans+=(n-mp.size())*2;
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna