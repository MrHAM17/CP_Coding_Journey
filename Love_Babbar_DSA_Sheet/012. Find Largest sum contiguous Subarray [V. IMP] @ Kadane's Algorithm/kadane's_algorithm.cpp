class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    
    
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long curr_sum = 0, max_sum = arr[0] ;
        
        for(int i=0; i<n; i++)
        {
            //Updating total max sum till current index.
            curr_sum += arr[i] ;
            
            //Checking & Storing max sum
            if(curr_sum > max_sum)
            {   
                max_sum = curr_sum ;
            }
            
            //If max sum at current index is negative, we do not need to add it to result so we update it to zero.
            if(curr_sum < 0)
            { 
                curr_sum = 0 ;
            }
        }
        
        return max_sum ;
    }
    
};



// *** L.B. DSA Sheet ***  Q.13/450   ==    Q.8/450

// TC = O(n),   SC = O(1)     
