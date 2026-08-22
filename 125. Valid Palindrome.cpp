class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0, j = n - 1;
        while(i<j){
            if(!isalnum(s[i])){  //check if alphabets and numerals.
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            
            if(tolower(s[i]) != tolower(s[j])){  //makes characters to lower case/
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
