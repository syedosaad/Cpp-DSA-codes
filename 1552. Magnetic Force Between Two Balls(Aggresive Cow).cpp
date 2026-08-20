class Solution {
public:
    bool isValid(vector<int>& arr, int n, int m, int minimumDist){
        //sort(arr.begin(),arr.end());
        int cows = 1, lastPos = arr[0];
        for(int i = 1; i<n; i++){
            if(arr[i]-lastPos >= minimumDist){
                cows++;
                lastPos = arr[i];
            }
            if(cows == m){
                return true;
            }
        }
        return false;
    }
    
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        if(m>n){
            return -1;
        }
        int st = 1, end = position[n-1] - position[0];
        int ans = 0;
        while(st<=end){
            int mid = st + (end - st)/2;
            if(isValid(position,n,m,mid)){
                ans = mid;
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
};
