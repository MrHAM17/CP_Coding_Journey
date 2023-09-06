
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        
        // step 1: Implement Priority queue
        priority_queue<int> pq ;
        
        // step 2: Insert the first k elements in pq
        for(int i=0; i<k; i++)
        {   pq.push(arr[i]) ;    }
        
        // step 3: Insert remaining elements in pq. Insert when num is smaller than pq.top() & rempve pq.top()
         for(int i=k; i<=r; i++)
        { 
            if(arr[i] < pq.top() )
            {
                pq.pop() ;
                pq.push(arr[i]) ;
            }
        }
        
        // step 4: Visit root for Kth smallest element because only 1st k smallest present in pq & kth smallest element present at root.
        return pq.top() ;
        
    }
};


// *** L.B. DSA Sheet ***  Q.3/450

// TC = (k)*log(k) + (r-k)*log(k) = O((r)*log(k)),   SC = O(k)                


