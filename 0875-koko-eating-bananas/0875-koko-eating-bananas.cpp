
class Solution {
public:
    long long fun(vector<int>& a, int n, int speed) {
        long long hours = 0;

        for (int i = 0; i < n; i++) {
            hours += a[i] / speed;

            if (a[i] % speed != 0)
                hours++;
        }

        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 1, r = *max_element(piles.begin(), piles.end());
        int res = r;

        while (l <= r) {
            int g = l + (r - l) / 2;
            long long hour = fun(piles, n, g);

            if (hour > h) {
                l = g + 1;
            } else {
                res = g;
                r = g - 1;
            }
        }

        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna