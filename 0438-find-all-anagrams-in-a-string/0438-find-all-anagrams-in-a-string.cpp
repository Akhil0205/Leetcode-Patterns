class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        int n = s.size();
        int m = p.size();

        if(m > n)
            return ans;

        vector<int> pCount(26, 0);
        vector<int> window(26, 0);

        for(int i = 0; i < m; i++)
        {
            pCount[p[i] - 'a']++;
            window[s[i] - 'a']++;
        }

        if(pCount == window)
            ans.push_back(0);

        for(int i = m; i < n; i++)
        {
            window[s[i] - 'a']++;          // add new char
            window[s[i - m] - 'a']--;      // remove old char

            if(window == pCount)
                ans.push_back(i - m + 1);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna