class Solution {
private:
    int day(string s){
        vector<int>days={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int m=stoi(s.substr(0,2));
        int d=stoi(s.substr(3,2));
        int t=0;
        for(int i=0; i<m-1; i++){
            t+=days[i];
        }
        return t+d;
    }
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int aA=day(arriveAlice);
        int lA=day(leaveAlice);
        int aB=day(arriveBob);
        int lB=day(leaveBob);
        return max(0, min(lA, lB)-max(aA, aB)+1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna