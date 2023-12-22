class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // step 1: sort the intervals --> as they aren't give in order.
        sort(intervals.begin() , intervals.end() ) ;

        // step 2: another space to store result/answer.
        vector<vector<int>> non_overlap_intervals ;
        int size = intervals.size() ;

    
        for(int i=0; i < size; i++ )
        {
            // // if(intervals[i][1] >= intervals[i+1][0]  &&  intervals[i][1] < intervals[i+1][1]  ) 
            // int srt1 = intervals[i][0] ; 
            // int end1 = intervals[i][1] ;
            // int srt2 = intervals[1+ i][0] ; 
            // int end2 = intervals[1+ i][1] ;
            
            // step 3: conditions to check overlapping.
            if( non_overlap_intervals.empty() || non_overlap_intervals.back()[1] < intervals[i][0]  )
            {
                // step 4: storeing non overlapping vectors.
                non_overlap_intervals.push_back(intervals[i]) ;
            }
            else
            {
                // step 5: store identified intervals by changing to new one
                non_overlap_intervals.back()[1] = max(  non_overlap_intervals.back()[1] , intervals[i][1]  ) ;
            }
        }
        
        // return our new vector contains non overlapping intervals.
        return non_overlap_intervals ;
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


*/
