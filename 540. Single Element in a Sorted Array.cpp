class Solution {
public:
    int singleNonDuplicate(vector<int>& num) {
        int n   = num.size();
        int str = 0;
        int end = n-1;
        
        if(n==1){
            return num[0];
        }

        while (str <= end){
            int mid = str + (end - str)/2;
            
            if(mid == 0 && num[0]!=num[1]){
                return num[mid];
            }
            if(mid == n-1 && num[n-2]!=num[n-1]){
                return num[mid];
            }
            if (num[mid-1]!=num[mid]&&num[mid]!=num[mid+1]){
                return num[mid];
            }
            if(mid%2 == 0){ //even
                if(num[mid-1] == num[mid]){  
                end = mid - 1;
            } else{
                str = mid + 1;
                }
            } 
            else{ //odd
                if(num[mid-1] == num[mid]){
                str = mid + 1;
                }
                else{
                end = mid - 1;
                }
            }
        }  
        return -1;
    }
    
};
