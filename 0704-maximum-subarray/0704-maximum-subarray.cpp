class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int a=nums[0];
        int b=nums[0];
        for(int i=1;i<n;i++)
        {
            int v1=a+nums[i];
            int v2=nums[i];
            a=max(v1,v2);
            b=max(a,b);
        }
        return b;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna