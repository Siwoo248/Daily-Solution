class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> nodup;
        int ans = 0;

        for(int i=0; i<size(nums); i++){
            nodup[nums[i]]++;
        }

        for (auto &p : nodup) {
            if (p.second == 1) {
                ans += p.first;
            }
        }
            
        return ans;
    }
};