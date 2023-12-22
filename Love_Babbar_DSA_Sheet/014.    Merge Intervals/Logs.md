### Problem: 
Merge interval 

@ 56. Merge Intervals.  
https://leetcode.com/problems/merge-intervals/description/
### Approach:

1. Sorting:

Sort the intervals based on their starting times.

Iterate through the sorted intervals:
 
    If the current interval's start time is greater than the previous interval's end time, append it as a new interval to the result list.
  
    Otherwise, merge the current interval with the last interval in the result list by updating its end time to the maximum of the two end times.


2. Using a Stack:

Push the first interval onto a stack.

For each subsequent interval:
 
    If the stack is empty or the current interval's start time is greater than the top interval's end time, push it onto the stack.
  
    Otherwise, merge the current interval with the top interval by updating the top interval's end time to the maximum of the two end times.

Pop the merged intervals from the stack and add them to the result list.

### My Final Approach:

Used the Sorting.

Time and Space Complexity:

    Both approaches have a time complexity of O(n log n) due to sorting (explicit or implicit), and a space complexity of O(n) for storing the merged intervals.
    
    The choice between sorting and stack-based approach often depends on personal preference and specific problem requirements.
