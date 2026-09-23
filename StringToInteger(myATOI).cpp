class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();

        // Skip spaces
        while(i < n && s[i] == ' ') {
            i++;
        }

        // Sign
        bool negative = false;

        if(i < n && s[i] == '-') {
            negative = true;
            i++;
        }
        else if(i < n && s[i] == '+') {
            i++;
        }

        long long value = 0;

        // Digits
        while(i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            value = value * 10 + digit;

            if(!negative && value > INT_MAX)
                return INT_MAX;

            if(negative && -value < INT_MIN)
                return INT_MIN;

            i++;
        }

        return negative ? -value : value;
    }
};
