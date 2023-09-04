### Problem: 
Find the "Kth" max and min element of an array   
https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

[**Note:** Sir gave the link for kth max & min element. But its only for kth min ele. ]


### Approach:

All approaches are perfectly documentated here in editorial section.

Kindly refer this  https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1


### My Final Approach:

Use prority queue. Store 1st k ele. Then insert remaining ele one by one smaller than root of pq. Return root ele as kth smallest ele.


### Tips & Trics


1) c++ o(nlogn) solution using builtin function   
```
int kthSmallest(int arr[], int l, int r, int k) {
        // Sort the array using built in function
        sort(arr,arr+r+1);
        // return the kth element whose index will be k-1
        return arr[k-1];
    }
```

2) Using C++ Inbuilt STL function nth_element
   
It expects three parameters first is starting index, second is nth element,third is ending index
it  gives the position of nth element in sorted array in O(N) time N is the distance between first and last.Here's an example from GFG



![image](https://github.com/MrHAM17/CP_Coding_Journey/assets/120514233/f54ae4c8-7a0e-433c-9c76-b0db1e639864)

```
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        
      nth_element(arr+l,arr+k-1,arr+r+1);
      return arr[k-1];
    }
};
```
