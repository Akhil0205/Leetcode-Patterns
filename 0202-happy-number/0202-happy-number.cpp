class Solution {
public:
    int fun(int n)
    {
        int sum=0;
        while(n>0)
        {
            int d=n%10;
            n=n/10;
            sum+=d*d;
        }
        return sum;
    }
    bool isHappy(int n) 
    {
        int slow=n,fast=n;
        while(fast!=1)
        {
            slow=fun(slow);
            fast=fun(fast);
            fast=fun(fast);
            if(slow==fast && slow!=1)
            {
                return false;
            }
        }
        
            //fast=1;
            return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna