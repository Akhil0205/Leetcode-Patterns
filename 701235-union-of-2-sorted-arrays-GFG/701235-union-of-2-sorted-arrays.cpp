class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        set<int>s(a.begin(),a.end());
        for(int i=0;i<b.size();i++)   
        {
            s.insert(b[i]);
        }
        return vector<int>(s.begin(),s.end());
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna