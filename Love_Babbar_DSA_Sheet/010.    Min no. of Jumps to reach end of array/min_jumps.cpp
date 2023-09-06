
class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        
        // ///////////////////////////////////   ///////////////////       My wrong Logic
        // // Edge case
        // if(n==1 )
        // {   return 0 ;  }
        
        // if( arr[0]==0 )
        // {   return -1 ;  }
        
        // int current = 0, destination = n-1, count = 0 ;
        
        // while(current < destination)
        // {
        //     // Checking for 0s inbetween the array
        //     if(arr[current]== 0  &&  current < destination)
        //     {   return -1 ;    }
            
        //     if(current >= destination )
        //     {   return count +1 ;    }
        //     else
        //     {
        //         current += arr[current] ;
        //         count++ ;
        //     }

        // }
        
        // if(current >= destination)
        // {   return count ;    }
        
        // // If reached here, means can not reach to end of array.
        // return -1 ;
        
        
        
        
        
        ///////////////////////////////////   ///////////////////     My Correct Logic
        // The number of jumps needed to reach the starting index is 0 
        if (n <= 1) 
            return 0; 
      
        // Return -1 if not possible to jump 
        if (arr[0] == 0) 
            return -1; 
      
        // initialization 
        int maxReach = arr[0];  // stores all time the maximal reachable index in the array. 
        int step = arr[0];      // stores the number of steps we can still take 
        int jump =1;//stores the number of jumps necessary to reach that maximal reachable position. 
      
        // Start traversing array 
        int i=1; 
        for (i = 1; i < n; i++) 
        { 
            // Check if we have reached the end of the array 
            if (i == n-1) 
                return jump; 
      
            // updating maxReach 
            maxReach = max(maxReach, i+arr[i]); 
      
            // we use a step to get to the current index 
            step--; 
      
            // If no further steps left 
            if (step == 0) 
            { 
                // we must have used a jump 
                jump++; 
      
                // Check if the current index/position or lesser index 
                // is the maximum reach point from the previous indexes 
                if(i >= maxReach) 
                    return -1; 
      
                // re-initialize the steps to the amount 
                // of steps to reach maxReach from position i. 
                step = maxReach - i; 
            } 
        } 
      
        return -1; 

    }
};


// *** L.B. DSA Sheet ***  Q.10/450

// TC = O(n),   SC = O(1)     



