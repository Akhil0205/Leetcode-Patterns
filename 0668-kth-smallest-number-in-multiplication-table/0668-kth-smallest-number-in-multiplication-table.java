class Solution {
    public int fun(int m,int n,int g)
    {
        int count=0;
        for(int i=1;i<=m;i++)
        {
            count+=Math.min(g/i,n);
        }
        return count;
    }
    public int findKthNumber(int m, int n, int k) {
        int res=-1;
        int l=1;
        int h=m*n;
        while(l<=h)
        {
            int g=l+(h-l)/2;
            int ans=fun(m,n,g);
            if(ans<k) l=g+1;
            else
            {
                res=g;
                h=g-1;
            }
        }
        
            return res;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna