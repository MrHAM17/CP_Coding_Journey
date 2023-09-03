class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        string s = "" ;
        
        for(int ptr = str.size()-1; ptr>=0; ptr--)
        {   s += str[ptr] ;   }
        
        return s ;
    }
};


// *** L.B. DSA Sheet ***  Q.1/450

// TC = O(N),   SC = O(N)                  --> 2nd Optimized Approach
