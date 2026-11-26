
class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int product = 1;
            int g = 0;
            int l = 1;

            for (int j = i; j < n; j++) {
                product *= nums[j];

                g = gcd(g, nums[j]);
                l = lcm(l, nums[j]);

                if (product == g * l) {
                    ans = max(ans, j - i + 1);
                }

                if (product > 25200) break;
            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna