
class Solution {
    public int[] searchRange(int[] nums, int target) {
        int first = -1, last = -1;
        int l = 0, h = nums.length - 1;

        while (l <= h) {
            int g = l + (h - l) / 2;

            if (nums[g] >= target) {
                h = g - 1;
            } else {
                l = g + 1;
            }
        }

        if (l < nums.length && nums[l] == target) {
            first = l;
        } else {
            return new int[]{-1, -1};
        }

        l = 0;
        h = nums.length - 1;

        while (l <= h) {
            int g = l + (h - l) / 2;

            if (nums[g] <= target) {
                l = g + 1;
            } else {
                h = g - 1;
            }
        }

        last = h;

        return new int[]{first, last};
    }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna