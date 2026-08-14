class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProfit = 0, bestBuy = prices[0];  //remember initialising the bestBuy to zero.

        for(int val: prices){
            
            //Calculate the best profit.
            if(val>bestBuy){
                maxProfit = max(maxProfit,val-bestBuy);
            }
            
            //Minimum price to buy.
            bestBuy = min(bestBuy,val);

        }
        return maxProfit;
    }
};
