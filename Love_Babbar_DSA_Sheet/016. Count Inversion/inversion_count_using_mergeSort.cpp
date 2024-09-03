// arr[]: Input Array
// N : Size of the Array arr[]
// Function to count inversions in the array.


typedef long long LL ;
LL count = 0 ;

// Function to merge two sorted subarrays and count inversions
void mergeSort_conquerAndCount(LL arr[], LL start, LL mid, LL end)
{
    LL n1 = mid - start + 1 ;
    LL n2 = end -mid ;
    
    // Dynamically allocate memory for the two subarrays
    LL* arr1 = new LL[n1] ;
    LL* arr2 = new LL[n2] ;
    // LL arr1[n1] , arr2[n2] ;
   
    // Copy data to temporary subarrays
    for(LL i = 0; i < n1; i++ )    {   arr1[i] = arr[start + i] ;        }
    for(LL i = 0; i < n2; i++ )    {   arr2[i] = arr[mid + 1 + i] ;      }
    
    // Merge the two subarrays and count inversions
    LL i = 0 , j = 0, k = start ;
    while(i < n1 && j < n2)
    {
        if(arr1[i] <= arr2[j] )     {   arr[k++] = arr1[i++] ;  }
        else
        {
            // Count the inversions: all remaining elements in arr1 are greater than arr2[j]
            count += n1 - i ;
            arr[k++] = arr2[j++] ;
        }
    }
    
    while(i < n1 )  {   arr[k++] = arr1[i++] ;  }     // Copy the remaining elements of arr1, if any
    while(j < n2 )  {   arr[k++] = arr2[j++] ;  }     // Copy the remaining elements of arr2, if any
    
    // Free allocated memory
    delete[] arr1 ;
    delete[] arr2 ;
}


// Function to recursively divide the array
void mergeSort_recursiveDivide(LL arr[], LL start, LL end)
{
    if(start < end)
    {
        LL mid = start + (end - start) / 2 ;
        mergeSort_recursiveDivide(arr, start, mid) ;              // Recursively sort and count inversions in the left half
        mergeSort_recursiveDivide(arr, mid + 1, end) ;            // Recursively sort and count inversions in the right half
        mergeSort_conquerAndCount(arr, start, mid, end) ;         // Merge the two halves and count inversions
  
    }
}


long long int inversionCount(long long arr[], long long n) {
    // Your Code Here
    count = 0 ;
    mergeSort_recursiveDivide(arr, 0, n-1) ;
    return count ;
}


// *** L.B. DSA Sheet ***  Q.16/450

// TC = O(N Log N),   SC = O(N)     
