class Solution{
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;

        for(int i=0; i<k; i++){
            sum += nums[i];
        }

        double max = sum;
        for(int i=k; i<nums.size(); i++){
            sum += nums[i] - nums[i-k];
            if(sum > max){max = sum;}
        }

        return max / k;
    }
};


// class Solution {     // This Method is O(nxk) which is larger than O(n) -> need simpler method
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         double max = INT_MIN; // for negative numbers.
//         // double max = 0;

//         for(int i=0; i<=nums.size()-k; i++){
//             double output=0;
//             for(int j=0; j<k; j++){
//                 output += nums[i+j];
//             }
//             if(output > max){max = output;}
//         }
//         return max/k;
//     }
// };