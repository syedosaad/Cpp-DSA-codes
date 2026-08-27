class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = nums.size(); //This to initialise ans with last element as counter will have it excluded.
        for(int i = 0; i<nums.size(); i++){
            ans ^= nums[i]^i;
            //ans ^= i;
            
        }
        return ans;
    }
};
