class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max;
        int current = 0;
        vector<int> altitude = {0};
        for(int i=0; i<gain.size(); i++){
            current += gain[i];
            altitude.push_back(current);
        }
        sort(altitude.begin(), altitude.end(), greater<int>());
        max = altitude[0];
        return max;
    }
};