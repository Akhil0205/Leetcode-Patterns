class Solution {
public:
    int maxSum(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;
        for(int x:nums)
        {
            maxi=max(x,maxi);
        }
        if(maxi<=0) return maxi;
        unordered_set<int>s;
        for(int x:nums)
        {
            if(x>0 && s.find(x)==s.end())
            {
                sum+=x;
                s.insert(x);
            }
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna