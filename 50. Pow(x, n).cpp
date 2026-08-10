class Solution {
public:
    double myPow(double x, int n) {
        
        long binForm = n;   //Saving n to a long variable for furthe bin operations.
            if(binForm<0){  //If the power is negative
                x = 1/x;    
                binForm = -binForm;  //making the number positive for further operation -(-x) = x
            }

        double ans = 1;  //initialising the return ans

        while(binForm > 0){  //checking if binary number is greater than zero
            if(binForm % 2 == 1){  //checking if the binary number is least digit is high
                ans *= x;  //if yes muliply that by x
            }
            x *= x;  //we raise poew of x here
            binForm /= 2;  //diving binary number by 2 to lower the digit
        }
        return ans;  //return the answer type
    }
};
