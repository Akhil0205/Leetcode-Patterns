class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.size() - 1;

        while (i >= 0) {
            while (i >= 0 && s[i] == ' ')
                i--;

            string word = "";

            while (i >= 0 && s[i] != ' ') {
                word += s[i];
                i--;
            }

            reverse(word.begin(), word.end());

            if (!word.empty()) {
                if (!ans.empty())
                    ans += " ";
                ans += word;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna