class Solution {
    public int sortPermutation(int[] nums) {
        int res = -1;

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != i) {
                res &= i & nums[i];
            }
        }

        return res == -1 ? 0 : res;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna