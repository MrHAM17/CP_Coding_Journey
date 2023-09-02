#### Case I --> If allow to change input.
**Way 1:** "Using C++ STL".

```
class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int start = 0 ;
        int end = str.length() -1 ;
        
        while( start < end)
        {
            char temp = str[end] ;
            
            str[end]  = str[start] ;
            str[start]= temp ;
            
            start++ ;
            end-- ;
        }
        
        return str ;
    }
};


// *** L.B. DSA Sheet ***  Q.1/450

// TC = O(N),   SC = O(1)                  --> 1st Optimized Approach


```

