class Solution {
    public int maxSubarrayLength(int[] nums, int k) {
        Map<Integer,Integer>freq=new HashMap<>();
        int maxl=0;
        int l=0;
        int n=nums.length;
        for(int r=0;r<n;r++)
        {
            freq.put(nums[r],freq.getOrDefault(nums[r],0)+1);
            while(freq.get(nums[r])>k)
            {
                freq.put(nums[l],freq.get(nums[l])-1);
                l++;
            }
            maxl=Math.max(maxl,r-l+1);

        }
        return maxl;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna