class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 1;  //Confirmed to be mountain type peak.
        int end = arr.size() - 2;  //So first and last can't be considered so move boundary condition.

        while(start <= end){
            int mid = start + (end-start)/2;

            if ((arr[mid-1] < arr[mid]) && (arr[mid] > arr[mid+1])){  //If the element is more than before and after element then its peak
                return mid;
            }

            if (arr[mid] < arr[mid+1]){  //checking if left is more
                start = mid+1;  //yes then shift start to mid and check right window.
            } else {
                end = mid-1;  //else the left side for answer
            }
        }
        return -1;
    }
};
