class Solution {
    public int maxSubArray(int[] nums) {
        int n=nums.length;
        int a=nums[0];
        int b=nums[0];
        for(int i=1;i<n;i++)
        {
            int v1=nums[i]+a;
            int v2=nums[i];
            a=Math.max(v2,v1);
            b=Math.max(a,b);
        }
        return b;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna