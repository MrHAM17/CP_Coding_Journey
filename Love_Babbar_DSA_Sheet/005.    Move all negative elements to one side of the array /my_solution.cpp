class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            // // Your code goes here
          
            //////////////////////////////////////////////  Below is the code i tried works fine but just not maintain the occurrence.
            int left = 0, right = n-1 ;
            while(left < right)
            {
                // If left is -ve & right is +ve
                if(arr[left] < 0 && arr[right] >= 0)
                {
                    left++ ;    right-- ; 
                }
               
                // If left is -ve & right is -ve
                else if(arr[left] < 0 && arr[right] < 0)
                {    left++ ;   }
                
                // If left is +ve & right is +ve
                else if(arr[left] >= 0 && arr[right] >= 0)
                {    right-- ;  }
                
                // If left is +ve & right is -ve
                else if(arr[left] >= 0 && arr[right] < 0)
                {
                    int temp  = arr[right] ;
                    arr[right] = arr[left] ;
                    arr[left]= temp ;
                    left++ ;
                    right-- ;
                }
            }
        }
};


// *** L.B. DSA Sheet ***  Q.5/450

// TC = (n),   SC = O(1)           
