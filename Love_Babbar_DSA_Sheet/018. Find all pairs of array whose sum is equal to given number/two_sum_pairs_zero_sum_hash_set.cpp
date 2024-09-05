#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        unordered_set<int> seen;        // To track elements we've seen
        unordered_set<string> uniquePairs; // To ensure pairs are unique
        vector<vector<int>> result;
        
        for (int num : arr) {
            int target = -num; // The number we need to find to make the sum zero
            
            if (seen.find(target) != seen.end()) {
                // Create a sorted pair to avoid duplicates
                vector<int> pair = {min(num, target), max(num, target)};
                string pairKey = to_string(pair[0]) + "," + to_string(pair[1]);
                
                if (uniquePairs.find(pairKey) == uniquePairs.end()) {
                    result.push_back(pair);
                    uniquePairs.insert(pairKey);
                }
            }
            
            seen.insert(num); // Add current number to the set
        }
        
        return result;
    }
};

// approach using hash set
// *** L.B. DSA Sheet ***  Q.18/450

// TC = O(N),   SC = O(N)     
