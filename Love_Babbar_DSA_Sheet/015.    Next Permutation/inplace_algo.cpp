class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // step 1: find the high-to-low point(dip) & keep track of index which will be used further.
        int index = -1 ;
        for(int i= nums.size()-2; i>-1; i--)
        {
            if(nums[i] < nums[i+1])
            {
                index = i ;
                break ;
            }
        }

        /* step 2: if index is not changed then array is in descending order, 
                   simply revers it as its a requirement & return and stop. */
        if(index == -1)
        {   return reverse(nums.begin(), nums.end()) ;  }

        /* step 3: else find the smaller no. but greater than dip point & swap them 
                   --> to achieve closer no. as a wide view. */
        for(int i= nums.size()-1; i>index; i--)
        {
            if(nums[index] < nums[i])
            {
               swap(nums[index] , nums[i]) ;
                break ;
            }
        }

        /* step 4: and sort the middle no. between swapped numbers 
                   --> to achieve closer no. as a minor view. */
        return reverse(nums.begin() + index +1, nums.end()) ;
    }
};

// *** L.B. DSA Sheet ***  Q.15/450

// TC = O(n),   SC = O(1)     
