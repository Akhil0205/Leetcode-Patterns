class Solution {
  public:
    bool isIntersect(vector<vector<int>> a) {
        // Code Here
        int n=a.size();
        sort(a.begin(),a.end());
        int i=0;int j=0;
        int start1=a[i][0];
        int end1=a[i][1];
        int res=0;
        for(int i=1;i<n;i++)
        {
            int start2=a[i][0];
            int end2=a[i][1];
            if(end1>=start2)
            {
                return true;
            }
            start1=start1;
            end1=max(end1,end2);
        }
        
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna