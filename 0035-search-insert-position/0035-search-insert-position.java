class Solution {
    public int searchInsert(int[] nums, int target) {
        int n=nums.length;
        int l=0,h=n-1;
        int res=n;
        while(l<=h)
        {
            int g=l+(h-l)/2;
            if(nums[g]>=target)
            {
                res=g;
                h=g-1;
            }
            else l=g+1;
        }
        return l;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna