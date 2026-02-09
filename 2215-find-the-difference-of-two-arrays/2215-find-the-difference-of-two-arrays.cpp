class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans1;
        vector<int> ans2;

        set<int> num1(nums1.begin(), nums1.end());  // vector -> set method 1

        set<int> num2;                              // vector -> set method 2
        num2.insert(nums2.begin(), nums2.end());

        for(int x : num1){
            if(num2.find(x) == num2.end()){
                ans1.push_back(x);
            }
        }
        
        for(int x : num2){
            if(num1.find(x) == num1.end()){
                ans2.push_back(x);
            }
        }
        
        return {ans1, ans2};
    }
};