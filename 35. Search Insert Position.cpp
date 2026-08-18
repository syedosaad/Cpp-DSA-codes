//35. Search Insert Position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();  
        
        if(target > nums[n-1]){  //check right most boundary
                return n;
            }
        for(int i = 0; i < n ; i++){
            if(target <= nums[i]){  //thorught all elements just check target should be less than or equal to the value and return i.
                return  i;
            }
            
        }
        return -1;
    }
};
