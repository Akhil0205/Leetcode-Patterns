class Solution {
public:
    int minSubArrayLen(int target,vector<int>& nums) 
    {
        int low=0;
        int high=0;
        int sum=0;
        int res=INT_MAX;
        int n=nums.size();
        while(high<n)
        {
            sum+=nums[high];
            while(sum>=target)
            {
                int len=high-low+1;
                res=min(res,len);
                sum-=nums[low];
                low++;
            }
            high++;
        }
        if(res==INT_MAX) return 0;
        return res;

    }
};


// class Solution {
// public:
//     int minSubArrayLen(int target,vector<int>& nums
//     ) {

//         int left = 0;
//         int sum = 0;
//         int ans = INT_MAX;
//         for(int right=0;right<nums.size();right++)
//         {
//             sum += nums[right];
//             while(sum >= target)
//             {
//                 ans =min(ans,right-left+1);
//                 sum -= nums[left];
//                 left++;
//             }
//         }
//         if(ans == INT_MAX)
//             return 0;

//         return ans;
//     }
// };

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna