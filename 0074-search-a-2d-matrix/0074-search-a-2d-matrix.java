class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int n=matrix.length;
        int m=matrix[0].length;
        int low=0;int high=n*m-1;
        while(low<=high)
        {
            int g=low+(high-low)/2;
            int r=g/m;
            int c=g%m;
            if(matrix[r][c]==target) return true;
            else if(matrix[r][c]<target) low=g+1;
            else high=g-1;
        }
        return false;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna