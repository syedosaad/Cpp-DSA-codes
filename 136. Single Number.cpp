class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ans = 0;
       for(int val : nums){
        ans = ans ^ val;    //Using XOR operator to cancel same numbers.
       } 
       return ans;
    }
};
