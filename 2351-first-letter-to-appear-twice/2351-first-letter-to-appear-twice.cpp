class Solution {
public:
    char repeatedCharacter(string s) {
        int freq[26] = {0};

        for (char c : s) {
            freq[c - 'a']++;

            if (freq[c - 'a'] == 2)
                return c;
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna