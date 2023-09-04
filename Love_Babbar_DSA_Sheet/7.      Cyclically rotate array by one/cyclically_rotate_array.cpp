
void rotate(int arr[], int n)
{
    int temp = arr[n-1] ;
    
    for(int i=n-1; i>=0; i--)
    {       arr[i] = arr[i-1] ;     }
    arr[0] = temp ;
    
    
    
    /////////// Below code is also work(same as above with minute changes)
    // int temp = arr[n-1] ;
    
    // for(int i=n-1; i>0; i--)
    // {       arr[i] = arr[i-1] ;     }
    // arr[0] = temp ;
}


// *** L.B. DSA Sheet ***  Q.7/450

// TC = O(n),   SC = O(1)     

