class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        unordered_map<int,int>f;
        int sum=0;
        int res=0;
        f[0]=1;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            int ques=(sum-k);
            int freq=f[ques];
            res+=freq;
            f[sum]++;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna