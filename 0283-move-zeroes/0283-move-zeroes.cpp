class Solution {
public:
    void moveZeroes(vector<int>& nums) { 
        int nonZero = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[nonZero++], nums[i]); // swap zero and non-zero -> 0s will be pushed back
            }
        }
    }
};
