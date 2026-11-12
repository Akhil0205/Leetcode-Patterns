
class Solution {

    boolean fun(int[] arr, int n, long limit, int stud) {

        int k = 1;
        long pages = 0;

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

    public int findPages(int[] arr, int k) {

        int n = arr.length;

        if(n < k) return -1;

        long low = 0, high = 0;
        long res = -1;

        for(int i = 0; i < n; i++) {
            low = Math.max(low, arr[i]);
            high += arr[i];
        }

        while(low <= high) {

            long g = low + (high - low) / 2;

            if(fun(arr, n, g, k)) {
                res = g;
                high = g - 1;
            }
            else {
                low = g + 1;
            }
        }

        return (int)res;
    }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna