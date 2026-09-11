class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       int minp=prices[0];
       int maxp=0;
       for(int i=1;i<n;i++)
       {
        int profit=prices[i]-minp;
        maxp=max(profit,maxp);
        minp=min(minp,prices[i]);
       } 
       return maxp;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna