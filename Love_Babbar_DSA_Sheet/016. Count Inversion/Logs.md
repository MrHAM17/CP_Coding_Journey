### Problem: 
Count Inversions

GFG @ Count Inversions  
https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
### Approach:

All [2] approaches are perfectly documentated here in editorial section.

Kindly refer this https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

### My Final Approach:

Count inversions in an array. An inversion is a pair 
Use a modified Merge Sort to count inversions.

**Steps:**

    Divide: Recursively split the array into two halves.

    Conquer: Merge the two halves while counting inversions:

    During merging, if an element from the right half is smaller than an element from the left half, 
    all remaining elements in the left half form inversions with this element.
  
    Combine: Sum inversions from the left half, right half, and those counted during merging.



**In-place:** No (uses additional space for temporary arrays)

**Stable:** Yes (preserves the relative order of equal elements)


Uses dynamic memory allocation for temporary arrays during merging.

Counts inversions efficiently while sorting the array.


