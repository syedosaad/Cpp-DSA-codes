class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
        int freq[26] = {0};

        for(int i=0; i<n; i++){
            freq[sentence[i]-'a'] = 1;
        }
        int sum = 0;
        for(int i=0; i<26; i++){
            sum += freq[i];
        } 
        if(sum == 26){
                return true;
        }
        return false;
    }
};
