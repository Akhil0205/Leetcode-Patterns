
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, n = nums.size(), h = n - 1;

        while (l <= h) {
            int g = l + (h - l) / 2;

            if (nums[g] == target) return g;

            if (nums[g] <= nums[h]) {
                // Right half is sorted
                if (target > nums[g] && target <= nums[h])
                    l = g + 1;
                else
                    h = g - 1;
            } else {
                // Left half is sorted
                if (target >= nums[l] && target < nums[g])
                    h = g - 1;
                else
                    l = g + 1;
            }
        }

        return -1;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna