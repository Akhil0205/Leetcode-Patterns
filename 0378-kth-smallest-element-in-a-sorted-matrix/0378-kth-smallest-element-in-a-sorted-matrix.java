class Solution {

    public int fun(int[][]arr,int n,int m,int g)
    {
        int row=n-1;int count=0;
        int col=0;
        while(row>=0 && col<m)
        {
            if(arr[row][col]<=g) 
            {
                count+=row+1;
                col++;
            }
            else row--;
        }
        return count;
    }
    public int kthSmallest(int[][] matrix, int k) 
    {
        int n=matrix.length;
        int m=matrix[0].length;
        int res=-1;
        int l=matrix[0][0];
        int h=matrix[n-1][m-1];
        while(l<=h)
        {
            int g=l+(h-l)/2;
            int ans=fun(matrix,n,m,g);
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