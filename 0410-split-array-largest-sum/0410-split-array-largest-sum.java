
class Solution {

    boolean fun(int[] arr, int n, int limit, int stud) {

        int k = 1;
        int pages = 0;

        for(int i = 0; i < n; i++) {

            if(pages + arr[i] <= limit) {
                pages += arr[i];
            }
            else {
                k++;
                pages = arr[i];
            }

            if(k > stud) return false;
        }

        return true;
    }

    public int splitArray(int[] nums, int k) {

        int n = nums.length;

        if(n < k) return -1;

        int low = 0, high = 0;

        for(int i = 0; i < n; i++) {
            low = Math.max(low, nums[i]);
            high += nums[i];
        }

        int res = -1;

        while(low <= high) {

            int g = low + (high - low) / 2;

            if(fun(nums, n, g, k)) {
                res = g;
                high = g - 1;
            }
            else {
                low = g + 1;
            }
        }

        return res;
    }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna