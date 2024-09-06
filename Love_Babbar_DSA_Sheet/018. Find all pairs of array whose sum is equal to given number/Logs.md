
### Problem: 
Find all pairs on integer array whose sum is equal to given number

GFG @ Two sum -Pairs with 0 Sum 
https://www.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1

### Approach:

There are 3 approaches:

1. Brute Force Approach: TC: O(N²) & SC: O(1) Involves checking all possible pairs to find those that sum to zero.

2. My Final Approach: TC: O(N log N) & SC: O(N)

3. Optimal Approach (Hashing): TC: O(N) & SC: O(N) Uses hash map to store values & their complements.



All [1st & 3rd] approaches are perfectly documentated there in editorial section.

Kindly refer this https://www.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1

### My Final Approach:

This approach lies between the brute force and optimal solutions. It involves sorting the array and using two pointers (left and right) to find pairs whose sum is zero.

**Steps:**

    Sort the array.
    Use two pointers:
       Left pointer starts at the beginning, right pointer starts at the end.
       If the sum of the elements at the two pointers is 0, add the pair to the result.
       Skip duplicate values.
       Adjust pointers based on whether the sum is less than or greater than 0.
  

### Code Hacks:

1. Duplicate Handling:

    In the two-pointer approach, skip over duplicate values at both the left and right pointers to avoid adding the same pair multiple times. This ensures the 
    uniqueness of pairs and keeps the output clean.

2. Sorting for Efficiency:
   
    Sorting the array brings down the time complexity to O(N log N), making the two-pointer technique feasible. It helps manage the array efficiently for searching 
    and duplicate handling.

3. Fast Input/Output Optimization:

    The hashing approach runs in O(N) time by storing elements and their complements, which is faster on large datasets but consumes more memory (O(N) space). 
    Choose this when space is not an issue and speed is a priority.

    If the array size is small enough, you can consider inplace methods (like marking visited elements with a specific flag or rearranging) to reduce space 
    complexity.


