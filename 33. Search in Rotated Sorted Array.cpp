class Solution {
public:
    int search(vector<int>& A, int tar) {
        int str = 0;
        int end = A.size() - 1;
        while(str <= end){
            int mid = str + (end-str)/2;

            if(tar == A[mid]){
                return mid;
            }

            if(A[str] <= A[mid]){   //Left side is sorted.
                if(A[str] <= tar && tar <= A[mid]){
                    end = mid - 1;  //Checking if its in the left side of mid.
                } else {
                    str = mid + 1;  //Checking if its in the right side of mid.
                }
            } else {    //Right side is sorted
                if(A[mid] <= tar && tar <= A[end]){
                    str = mid + 1;  //Checking if its in the right side of mid.
                } else {
                    end = mid - 1;  //Checking if its in the left side of mid.
                }
            }

        }
        return -1;
    }
};
