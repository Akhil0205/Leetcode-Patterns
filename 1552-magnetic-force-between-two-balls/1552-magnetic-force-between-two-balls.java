class Solution {
    boolean fun(int[]arr,int n,int m,int g)
    {
        int cows=1;
        int prevpos=arr[0];
        for(int i=1;i<n;i++)
        {
            int dis=arr[i]-prevpos;
            if(dis<g) continue;
            cows++;
            prevpos=arr[i];
        }
        if(cows>=m) return true;
        return false;
    }
    public int maxDistance(int[] position, int m) {
        int n=position.length;
        Arrays.sort(position);
        int l=1,h=position[n-1]-position[0];
        int res=-1;
        while(l<=h)
        {
            int g=l+(h-l)/2;
            if(fun(position,n,m,g)) 
            {
                res=g;
                l=g+1;
            }
            else h=g-1;
        }
        return res;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna