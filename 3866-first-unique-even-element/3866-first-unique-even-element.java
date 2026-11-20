class Solution {
    public int firstUniqueEven(int[] nums) {
        int[] freq=new int[101];
        int res=-1;
        for(int x:nums)
        {
            freq[x]++;
        }
        for(int x:nums)
        {
            if(x%2==0 && freq[x]==1)
            {
                return x;
            }
        }
        return res;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna