
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());

        int n = skill.size();
        int tar = skill[0] + skill[n-1];

        long long res = 0;

        int i = 0;
        int j = n-1;

        while(i < j) {
            if(skill[i] + skill[j] != tar)
                return -1;

            res += (long long)skill[i] * skill[j];

            i++;
            j--;
        }

        return res;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna