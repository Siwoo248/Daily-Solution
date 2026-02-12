class RecentCounter {
    vector<int> p;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        int min = t - 3000;
        int max = t;
        int cnt = 0;

        p.push_back(t);

        for(int i : p){
            if(i >= min && i <= max){
                cnt++;
            }
        }
        return cnt;
    }

};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */