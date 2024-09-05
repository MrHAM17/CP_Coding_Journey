
class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        vector<vector<int>> pairs ; 
        // sort the array
        sort(arr.begin() , arr.end() ) ;
        
        // 2 pointer approach begins
        int left = 0, right = arr.size() -1 ;
        
        while(left < right)
        {
            int sum = arr[left] + arr[right] ;
            if(sum == 0)
            {
                pairs.push_back({arr[left], arr[right]}) ;
                
                // skip duplicates
                while(left < right && arr[left] == arr[left +1] ) { ++left ;    }
                ++left ;
                while(left < right && arr[right] == arr[right -1] ) { --right ;    }   
                --right ;
            }
            else if(sum < 0) { ++left ;     }
            else { --right ;    }
        }
        return pairs ;
    }
};

// *** L.B. DSA Sheet ***  Q.18/450

// TC = O(N Log N),   SC = O(N)   
