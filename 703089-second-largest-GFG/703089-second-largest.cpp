class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max=-1;
        int max2=-1;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)
            {
                max2=max;
                max=arr[i];
            }
            else if(arr[i]>max2 && arr[i]!=max)
            {
                max2=arr[i];
            }
            
        }
        
        return max2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna