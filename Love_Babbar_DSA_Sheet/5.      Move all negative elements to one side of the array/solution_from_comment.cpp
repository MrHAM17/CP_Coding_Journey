class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            // // Your code goes here            
            //////////////////////////////////////////////  Below is the code i referred from comments.
            vector<int>pos,neg;
            int count =0;
            for(int i = 0;i<n;i++)
            {
                if(arr[i] <0)
                neg.push_back(arr[i]);
                else
                pos.push_back(arr[i]);
                
            }
            for(int i = 0;i<neg.size();i++)
            {
                arr[count] = neg[i];
                count++;
            }
            for(int i= 0;i<pos.size();i++)
            {
                arr[count] = pos[i];
                count++;
            }
        
        }
};

// *** L.B. DSA Sheet ***  Q.5/450

// TC = (n),   SC = O(1)           
