class Solution {
    public int searchInsertK(int arr[], int k) {
        // code here
        int n=arr.length;
        int l=0,h=n-1;
        int res=n;
        while(l<=h)
        {
            int g=l+(h-l)/2;
            if(arr[g]>=k)
            {
                res=g;
                h=g-1;
            }
            else l=g+1;
        }
        return l;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna