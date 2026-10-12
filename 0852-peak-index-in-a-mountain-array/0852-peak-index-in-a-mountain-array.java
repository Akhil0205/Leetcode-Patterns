
class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int l = 0, h = arr.length - 1;

        while (l < h) {
            int g = l + (h - l) / 2;

            if (arr[g] < arr[g + 1]) {
                l = g + 1;
            } else {
                h = g;
            }
        }

        return l;
    }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna