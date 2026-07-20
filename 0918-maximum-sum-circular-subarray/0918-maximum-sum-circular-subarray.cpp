class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) {
        int n = a.size();

        int total = a[0];

        int maxEnd = a[0];
        int maxSum = a[0];

        int minEnd = a[0];
        int minSum = a[0];

        for (int i = 1; i < n; i++) {
            total += a[i];

            // Kadane for maximum subarray
            maxEnd = max(a[i], maxEnd + a[i]);
            maxSum = max(maxSum, maxEnd);

            // Kadane for minimum subarray
            minEnd = min(a[i], minEnd + a[i]);
            minSum = min(minSum, minEnd);
        }

        // All elements are negative
        if (maxSum < 0)
            return maxSum;

        // Maximum of normal and circular subarray
        return max(maxSum, total - minSum);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna