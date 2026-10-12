
class Solution {
    public int findMin(int[] nums) {
        int l = 0, n = nums.length, h = n - 1;
        int res = -1;

        while (l < h) {
            int g = l + (h - l) / 2;

            if (nums[g] > nums[h]) {
                l = g + 1;
            } else {
                res = g;
                h = g;
            }
        }

        return nums[l];
    }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna