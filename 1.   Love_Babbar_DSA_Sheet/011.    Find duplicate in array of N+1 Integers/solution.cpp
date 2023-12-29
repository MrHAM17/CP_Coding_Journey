class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Step 1: Create array with 1 to n numbers
        int vsize = nums.size() -1; 
        int arr[nums.size()] ; 
        for(int i=0; i<=vsize; i++)
        {   arr[i] = i+1 ;    }

        // Step 2: Read number from input array & mark that 0 in the created array.
        //         Find repeated number by reading 0 already for that number in c. array    
        for(int i=0; i<nums.size(); i++ )     
        {
            int x = nums[i] ;
            if(arr[x] == 0)    
            {   return x ;    }

            int temp = nums[i] ;
            arr[temp] = 0 ;
        }
        return -1 ;
    }
};

// *** L.B. DSA Sheet ***  Q.11/450

// TC = O(n),   SC = O(n)     


