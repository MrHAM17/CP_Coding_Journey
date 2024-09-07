class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
       
        vector<int> result;
        
        int i = 0, j = 0, k = 0;
        int n1 = arr1.size(), n2 = arr2.size(), n3 = arr3.size();
        
        while (i < n1 && j < n2 && k < n3) 
        {
            // If all three arrays have the same element, add it to the result
            if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) 
            {
                // To avoid duplicates in the result
                if (result.empty() || result.back() != arr1[i]) 
                {   result.push_back(arr1[i]);   }
                ++i; ++j; ++k;
            } 
            // Move the pointer which points to the smallest element
            else if (arr1[i] < arr2[j]) {   ++i;    } 
            else if (arr2[j] < arr3[k]) {   ++j;    } 
            else {  ++k;    }
        }
        
        // If no common elements found
        if (result.empty()) {   result.push_back(-1);   }
        
        return result;
    }
};


// *** L.B. DSA Sheet ***  Q.19/450

// TC = O(N),   SC = O(N)     
