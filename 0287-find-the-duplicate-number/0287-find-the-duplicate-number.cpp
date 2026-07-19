class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int slow=0,fast=0;
        while(true)
        {
            slow=a[slow];
            fast=a[fast];
            fast=a[fast];
            if(slow==fast) break;
        }
        slow=0;
        
            while(slow!=fast)
            {
                slow=a[slow];
                fast=a[fast];
            }
            return slow;
    }

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna