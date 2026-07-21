class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int n=a.size();
        int left=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            int right=sum-left-a[i];
            if(left==right) return i;
            left+=a[i];
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna