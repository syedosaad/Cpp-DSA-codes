class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans(n, 1);
        
        //prefix
        for(int i=1; i<n ; i++){
            ans[i] = ans[i-1]*nums[i-1];  //here we start at 1 on the left.Normal loop!  
        }

        //Suffix
        int suffix = 1; //Initialize to 1 and defining this to not mix up with exisiting code
        for(int i=n-2; i>=0; i--){  //here we start at n-2 as n-1 has nothing on the right.Backward loop!
            suffix *= nums[i+1];
            ans[i] *= suffix;
        }
    return ans; 
        
    }
};
