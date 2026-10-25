class Solution {
    public int closedIsland(int[][] grid) {
        int rows=grid.length;
        int cols=grid[0].length;

        //remove land(0)
        for(int r=0;r<rows;r++)
        {
            for(int c=0;c<cols;c++)
            {
                if(r==0 || r==rows-1|| c==0 ||c==cols-1)
                {
                    if(grid[r][c]==0) dfs(grid,r,c);
                }
            }
        }
        //count remaining
        int closedIslands=0;
        for(int r=0;r<rows;r++)
        {
            for(int c=0;c<cols;c++)
            {
                if(grid[r][c]==0)
                {
                    closedIslands++;
                    dfs(grid,r,c);
                }
            }
        }
        return closedIslands;
        }
        private void dfs(int[][] grid,int r,int c)
        {
            if(r<0 || r>=grid.length ||
            c<0 ||c>=grid[0].length ||
            grid[r][c]!=0)
            return;
            grid[r][c]=1;

            dfs(grid,r+1,c);
            dfs(grid,r-1,c);
            dfs(grid,r,c+1);
            dfs(grid,r,c-1);
        }
    }


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna