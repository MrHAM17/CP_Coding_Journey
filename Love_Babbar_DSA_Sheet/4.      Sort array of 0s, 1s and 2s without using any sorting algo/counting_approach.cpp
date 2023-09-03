class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        // step 1: Count 0s, 1s, and 2s
        int zero_cnt = 0, one_cnt = 0, two_cnt = 0 ;
        for(int i=0; i<n; i++)
        {
            if(a[i] == 0)
            {   zero_cnt++ ;    }
           
            if(a[i] == 1)
            {   one_cnt++ ;    }
           
            if(a[i] == 2)
            {   two_cnt++ ;    }
        }
        
        // step 2: Overwrite data of 0s, 1s, and 2s for counted times for each.
        int address = 0 ;
        for(int i = 0; i <zero_cnt; i++)
        {    a[address++] = 0;     }
    
        for(int j = 0; j <one_cnt; j++)
        {    a[address++] = 1;     }
        
        for(int k = 0; k <two_cnt; k++)
        {    a[address++] = 2;     }
    }
};


// *** L.B. DSA Sheet ***  Q.4/450

// TC = (n),   SC = O(1)                
