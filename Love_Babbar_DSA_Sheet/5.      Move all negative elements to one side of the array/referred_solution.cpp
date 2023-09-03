class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            // // Your code goes here
            
            //////////////////////////////////////////////  Below is the code i took from main link of question works fine but just not maintain the occurrence.
            int left = 0, right = n-1 ;
              // Loop to iterate over the
              // array from left to the right
              while (left<=right)
              {
                    // Condition to check if the left
                    // and the right elements are
                    // negative
                    if (arr[left] < 0 && arr[right] < 0)
                      left+=1;
                     
                    // Condition to check if the left
                    // pointer element is positive and
                    // the right pointer element is negative
                    else if (arr[left]>0 && arr[right]<0)
                    {
                      int temp=arr[left];
                      arr[left]=arr[right];
                      arr[right]=temp;
                      left+=1;
                      right-=1;
                    }
                     
                    // Condition to check if both the
                    // elements are positive
                    else if (arr[left]>0 && arr[right] >0)
                      right-=1;
                    else
                    {
                      left += 1;
                      right -= 1;
                    }
              }        
        }
};

// *** L.B. DSA Sheet ***  Q.5/450

// TC = (n),   SC = O(1)           
