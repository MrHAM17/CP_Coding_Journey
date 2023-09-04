// Function to get the minimum and maximum values from an array
pair<long long, long long> getMinMax(long long a[], int n) 
{
    ll mini = 1e18, maxi = -1;
    
    // Iterating over the array
    for (int i = 0; i < n; i++) 
    {
        mini = min(a[i], mini);
        maxi = max(a[i], maxi);
    }
    
    return {mini, maxi};
}


// *** L.B. DSA Sheet ***  Q.2/450

// TC = O(N),   SC = O(1)                  --> Optimized Approach
