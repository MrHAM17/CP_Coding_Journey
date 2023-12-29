// NOTE: The code is not complete right.

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // step 1: another space to store result/answer.
        stack<vector<int>> mergedIntervals;
        int size = intervals.size() ;

    
        // for(int i=0; i < size; i++ )
        for (const auto& interval : intervals)
        {
            // step 2: conditions to check overlapping.
            if (mergedIntervals.empty() || mergedIntervals.top()[1] < interval[0]) 
            {
                // step 3: store identified intervals by changing to new one.
                mergedIntervals.push(interval);        
            }
            else 
            {
                // Update the top interval's end time if necessary.
                mergedIntervals.top()[1] = max(mergedIntervals.top()[1], interval[1]);

                // Check if the current interval needs to be merged with the previous one.
                if (mergedIntervals.top()[0] <= interval[1]) 
                {
                    // Update start time if smaller
                    mergedIntervals.top()[0] = min(mergedIntervals.top()[0], interval[0]); 
                } 
                else 
                {
                    // Current interval is completely disjoint from the top, push it as a new interval.
                    mergedIntervals.push(interval);
                }
            }
        }
        
        // step 5: return our new vector contains non overlapping intervals.
        vector<vector<int>> result;
        while (!mergedIntervals.empty()) 
        {
            result.push_back(mergedIntervals.top());
            mergedIntervals.pop();
        }

        return result;
    }
};

// *** L.B. DSA Sheet ***  Q.14/450

// TC = O(n log n),   SC = O(n)     



/*
Here are the C++ approaches to merge overlapping intervals:

1. Sorting:
Sort the intervals based on their starting times.
Iterate through the sorted intervals:
    If the current interval's start time is greater than the previous interval's end time, append it to the result list.
    Otherwise, merge the current interval with the previous interval by updating the previous interval's end time to the maximum of the two end times.


2. Using a Stack:

Push the first interval onto a stack.
For each subsequent interval:
    If the current interval's start time is greater than the top interval's end time, push it onto the stack.
    Otherwise, merge the current interval with the top interval by updating the top interval's end time to the maximum of the two end times.
Pop the merged intervals from the stack and add them to the result list.


Time and Space Complexity:

Both approaches have a time complexity of O(n log n) due to sorting, and a space complexity of O(n) for storing the merged intervals.
The stack-based approach avoids explicit sorting, but its time complexity is still O(n log n) due to the implicit sorting that occurs when pushing and popping intervals from the stack.




Pushing and popping elements from a stack is not truly constant time. While insertion at the top of the stack is technically O(1), finding the top element (needed for comparison) and removing it involves traversing the internal data structure (e.g., linked list) which can be O(n) in the worst case, depending on the implementation.
In practice, the worst-case scenario for a stack in this problem isn't common. It occurs when each interval overlaps all previous ones, causing them to be stacked and then unstacked one by one. However, in most cases, intervals only overlap a few others, leading to fewer stack operations and a lower overall time complexity.
Amortized analysis further reinforces the O(n log n) complexity. This analysis considers the average cost of an operation across all operations in the algorithm. In this case, the cost of expensive pushes and pops is amortized by cheaper pushes for non-overlapping intervals, resulting in an average cost of O(log n) per operation, and therefore an overall time complexity of O(n log n).
Therefore, despite its lack of explicit sorting, the second approach with a stack still exhibits the same O(n log n) time complexity as the sorting approach due to the underlying operations involved in managing the stack effectively.

*/
