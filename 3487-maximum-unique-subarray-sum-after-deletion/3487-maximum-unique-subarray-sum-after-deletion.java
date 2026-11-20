class Solution {
    public int maxSum(int[] nums) {
        int n=nums.length;
        HashSet<Integer>set=new HashSet<>();
        int sum=0;
        int max=Integer.MIN_VALUE;
        for(int x:nums)
        {
            max=Math.max(max,x);
        }
        if(max<=0) return max;
        for(int x:nums)
        {
            if(x>0 && !set.contains(x))
            {
                sum+=x;
                set.add(x);
            }
        } 
        return sum;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna