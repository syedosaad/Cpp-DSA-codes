

bool isValid(vector <int> arr, int n, int m, int maxTime){
    int painters = 1, time = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>maxTime){
            return false;
        }
        if(arr[i]+time<=maxTime){
            time += arr[i];
        } else {
            painters++;
            time = arr[i];
        }
    }
    return painters > m ? false : true;
}




int findLargestMinDistance(vector<int> &boards, int m)
{
    int n = boards.size();
    int sum = 0, max = 0;
    for(int i=0; i<n;i++){
        sum += boards[i];
        if(max<boards[i]){
            max = boards[i];
        }
    }
    int st = max, end = sum;
    int ans = -1;

    while(st<=end){
        int mid = st + (end - st)/2;
        if(isValid(boards,n,m,mid)){
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}
