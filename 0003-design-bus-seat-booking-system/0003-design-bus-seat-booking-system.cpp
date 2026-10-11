class BusBooking {
private:
    int n;
    int time=0;
    int cnt=0;
    unordered_map<string, int>booktime;
public:
    BusBooking(int n) {
        this->n=n;
    }
    
    void toggle(string seat) {
        if(booktime.find(seat) != booktime.end()){
            time-=booktime[seat];
            booktime.erase(seat);
            cnt--;
            return;
        }
        int cost=1;
        if(seat[0] == 'A' || seat[0]=='D'){
            string adj;
            if(seat[0] == 'A'){
                adj='B'+seat.substr(1);
            }else{
                adj='C'+seat.substr(1);
            }
            if(booktime.find(adj)!=booktime.end()){
                cost=3;
            }
        }
        booktime[seat]=cost;
        time+=cost;
        cnt++;
    }
    
    int getTotalTime() {
        return time;
    }
    
    int getMinTime() {
        return cnt;
    }
};

/**
 * Your BusBooking object will be instantiated and called as such:
 * BusBooking* obj = new BusBooking(n);
 * obj->toggle(seat);
 * int param_2 = obj->getTotalTime();
 * int param_3 = obj->getMinTime();
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna