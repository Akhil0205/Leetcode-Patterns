class Solution {
    public int minimizeSum(int[] nums) {
        //options to change:
        //2 largest
        //largest and smallest
        //2 smallest 
        //take the min of the 3
        int n=nums.length;
        Arrays.sort(nums);
        int a=nums[n-1]-nums[2];
        int b=nums[n-2]-nums[1];
        int c=nums[n-3]-nums[0];
        return Math.min(a,Math.min(b,c));
        
        

    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna