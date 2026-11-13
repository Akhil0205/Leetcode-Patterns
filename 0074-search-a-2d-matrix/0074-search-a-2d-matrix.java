// class Solution {
//     public boolean searchMatrix(int[][] matrix, int target) {
//         int n=matrix.length;
//         int m=matrix[0].length;
//         int low=0;int high=n*m-1;
//         while(low<=high)
//         {
//             int g=low+(high-low)/2;
//             int r=g/m;
//             int c=g%m;
//             if(matrix[r][c]==target) return true;
//             else if(matrix[r][c]<target) low=g+1;
//             else high=g-1;
//         }
//         return false;
//     }
// }



class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {

        int n = matrix.length;
        int m = matrix[0].length;

        int low = 0;
        int high = n-1;

        // Step 1: Find the possible row
        while(low <= high) {

            int mid = low + (high-low)/2;

            if(target >= matrix[mid][0] &&
               target <= matrix[mid][m-1]) {

                // Step 2: Binary search inside that row
                int l = 0;
                int h = m-1;

                while(l <= h) {

                    int g = l + (h-l)/2;

                    if(matrix[mid][g] == target)
                        return true;

                    else if(matrix[mid][g] < target)
                        l = g+1;

                    else
                        h = g-1;
                }

                return false;
            }

            else if(target < matrix[mid][0]) {
                high = mid-1;
            }

            else {
                low = mid+1;
            }
        }

        return false;
    }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna