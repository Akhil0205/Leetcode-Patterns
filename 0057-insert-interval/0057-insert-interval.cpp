class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& newa) {

        vector<vector<int>> temp;
        int n = a.size();

        // Insert new interval at the correct position
        bool inserted = false;
        for (int i = 0; i < n; i++) {
            int start = a[i][0];

            if (!inserted && start > newa[0]) {
                temp.push_back(newa);
                inserted = true;
            }

            temp.push_back(a[i]);
        }

        // If new interval has the largest start
        if (!inserted) {
            temp.push_back(newa);
        }

        // Merge intervals
        vector<vector<int>> res;

        int start1 = temp[0][0];
        int end1 = temp[0][1];

        for (int i = 1; i < temp.size(); i++) {
            int start2 = temp[i][0];
            int end2 = temp[i][1];

            if (end1 >= start2) {
                end1 = max(end1, end2);
            } else {
                res.push_back({start1, end1});
                start1 = start2;
                end1 = end2;
            }
        }

        res.push_back({start1, end1});

        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna