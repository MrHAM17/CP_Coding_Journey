class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Edge case: If the prices vector is empty, no transactions can be made
        if(prices.empty() ) {   return 0 ;  }

        // min_price: To track the minimum price encountered so far
        // max_profit: To track the maximum profit possible
        // profit: To calculate the profit for the current day
        int min_price = INT_MAX , profit = 0, max_profit = 0 ;

        // Buy the stock
        for(int i=0; i<prices.size(); i++)
        {
            // Update the minimum price if the current price is lower
            if(prices[i] < min_price )    {   min_price = prices[i] ;    }

            // Calculate the profit if we were to sell at the current price
            profit = prices[i] - min_price ;

            // Update the maximum profit if the current profit is greater
            if(profit > max_profit)  {   max_profit = profit ;   }
        }
        return max_profit ;
    }
};

// *** L.B. DSA Sheet ***  Q.17/450

// TC = O(N),   SC = O(1)     
