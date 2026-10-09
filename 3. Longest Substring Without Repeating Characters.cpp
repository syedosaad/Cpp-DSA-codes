//3. Longest Substring Without Repeating Characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
            
            int n = s.size();
            int ans = 0;
            int left = 0;
    for(int right=0; right<n ; right++){
        for(int i=left;i<right;i++){
            if(s[i] == s[right]){
                left = i + 1;
                break;
            }
        }
        ans = max(ans,right-left+1);
    }
    return ans;
}
};
