### Problem: 
Best Time to Buy and Sell Stock

Leetcode @ 121. Best Time to Buy and Sell Stock  
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
### Approach:

All [2] approaches are perfectly documentated here.

Kindly refer this 

### My Final Approach:

Achieve this by iterating through the list of stock prices while maintaining the minimum price encountered so far 
and calculating the potential profit if we were to sell on the current day.

**Steps:**

    Initialize min_price to a very large value (INT_MAX) and max_profit to 0.
    
    Traverse through each price in the array:
       Update min_price if the current price is lower than min_price.
       Calculate the profit if the stock was bought at min_price and sold at the current price.
       Update max_profit if the calculated profit is higher than the previous max_profit.
    
    Return max_profit.

### Code Hacks:
Learning from the second solution (concise_stock_profit_parser.cpp), here are some optimizations and techniques used:

1. Fast Input/Output Optimization:

    1.1 Disabling Synchronization -
   
    cin.tie(nullptr)->sync_with_stdio(false);

    1) cin.tie(nullptr): Unties cin from cout. By default, cin is tied to cout which means cin will flush cout before performing input operations.
       Untying them avoids unnecessary flushing, which can improve performance.

    2) sync_with_stdio(false): Disables synchronization between C++ streams (cin, cout, etc.) and C streams (stdio functions like printf).
       This further speeds up I/O operations because the C++ streams no longer need to be synchronized with C standard streams.

    1.2 Redirecting Output -
   
    freopen("user.out", "w", stdout);

    1) freopen("user.out", "w", stdout): Redirects the standard output (stdout) to a file named user.out.
       This can be useful when dealing with large amounts of output, as file I/O operations can sometimes be more efficient than console output, particularly in a competitive programming environment.

2. Efficient Parsing and Calculation:

    2.1 Inline Processing of Prices -
   
        for (int _i = 1, _n = s.length(); _i < _n; ++_i) {
        int price = s[_i++] & 15;
        while ((s[_i] & 15) < 10) price = price * 10 + (s[_i++] & 15);
        minPrice = min(minPrice, price);
        solution = max(solution, price - minPrice);
        }

    1) Direct Parsing: This block parses numeric values from a string in a highly efficient manner.
       The expression s[_i++] & 15 extracts digits from the string (using bitwise operations to convert characters to their integer values quickly).

    2) Handling Multiple Digits: The while loop processes multi-digit numbers by aggregating consecutive digits.
    
    3) Efficient Calculation: Maintains the minimum price seen so far and calculates the maximum profit dynamically as it parses through the string.
       This minimizes the need for additional data structures or multiple passes over the input. 


3. Usage:
   
   These optimizations and techniques help handle large inputs and outputs more efficiently, 
   which is especially beneficial in competitive programming scenarios where performance is critical.

   This approach is efficient and well-suited for problems where a single transaction is allowed, and the goal is to maximize profit by buying low and selling high on future days.
