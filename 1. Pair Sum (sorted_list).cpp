//In this we will be adding first and last element and check it with taget if its more than decrese last element and if its less then add to first element, if its equal return the answer


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans; //Creating vector to return answer

        int n = nums.size();  //limits
        
        int i = 0, j = n-1;  //limits again

        while(i<j){
            int pairSum = nums[i] + nums[j];

            if(pairSum>target){  
                j--;
            }
            else if(pairSum<target){
                i++;
            }
            else
            {
                ans.push_back(i);  //save i in ans
                ans.push_back(j);    //save3 j in ans
                return ans;  
            }
        }
        return ans;
    }
};
