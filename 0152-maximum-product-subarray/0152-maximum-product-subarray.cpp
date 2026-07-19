class Solution {
public:
    int maxProduct(vector<int>& a) {
      int maxend=a[0];  
      int minend=a[0];
      int ans=a[0];
      int n=a.size();
      for(int i=1;i<n;i++)
      {
        int v1=minend*a[i];
        int v2=maxend*a[i];
        int v3=a[i];
        maxend=max(v1,max(v2,v3));
        minend=min(v1,min(v2,v3));
        ans=max(ans,max(minend,maxend));
      }
      return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna