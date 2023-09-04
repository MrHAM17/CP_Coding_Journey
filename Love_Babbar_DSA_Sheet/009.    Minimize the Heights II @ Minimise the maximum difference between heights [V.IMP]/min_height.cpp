class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        
        
        ///////////////////////////////////   ///////////////////       My wrong Logic
        // int mini = 0, maxi = 0 ; 
        
        // for(int i=0; i<n; i++)
        // {
        //     // step 1: Modify the values
        //     if(arr[i]-k < 0)
        //     {   arr[i] += k ;   }
        //     else
        //     {   arr[i] -= k ;   }
            
        //     // step 2: Finf min & max
        //     mini = min(mini, arr[i] ) ;
        //     maxi = max(maxi, arr[i] ) ;
        // }
        
        
        // // step 3: Find minimum possible difference between height of shortest & tallest towers of modified each tower.
        // int diff = maxi - mini ;
        // return diff ;
        
        
        
        ///////////////////////////////////   ///////////////////     My Correct Logic
        // step 1: First sort the array
        sort(arr, arr+n) ;
        
        // step 2: Find curr min, max & diff
        int curr_min = arr[0] ;
        int curr_max = arr[n-1] ;
        int curr_diff = curr_max - curr_min ;
        
        // step 3: Find min & max from all possible heights
        for(int i=1; i<n; i++)
        {
            if(arr[i]-k < 0) {  continue ;  }       // Ignore because we don't want -ve heights
            
            curr_min = min(arr[0]+k, arr[i]-k )  ;
            curr_max = max(arr[i-1]+k, arr[n-1]-k )  ;
            curr_diff = min(curr_diff, curr_max - curr_min) ;
        }
        
        return curr_diff ;
    }
};


// *** L.B. DSA Sheet ***  Q.9/450

// TC = O(n log n),   SC = O(1)     
