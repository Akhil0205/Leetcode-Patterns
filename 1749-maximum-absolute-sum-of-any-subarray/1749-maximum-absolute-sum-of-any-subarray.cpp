// class Solution {
// public:
//     int maxAbsoluteSum(vector<int>& nums) {
//         int maxEnd = 0, minEnd = 0;
//         int ans = 0;

//         for (int x : nums) {
//             maxEnd = max(x, maxEnd + x);
//             minEnd = min(x, minEnd + x);

//             ans = max(ans, max(abs(maxEnd), abs(minEnd)));
//         }

//         return ans;
//     }
// };
class Solution {
public:
    int maxAbsoluteSum(vector<int>& a) {
        int n = a.size();

        int maxEnd = a[0];
        int minEnd = a[0];
        int res = abs(a[0]);

        for (int i = 1; i < n; i++) {

            maxEnd = max(maxEnd + a[i], a[i]);
            minEnd = min(minEnd + a[i], a[i]);

            res = max(res, max(abs(maxEnd), abs(minEnd)));
        }

        return res;
    }
};


// class Solution {
// public:
//     int maxAbsoluteSum(vector<int>& a) {
//       int n=a.size();
//       int bestend=a[0];
//       int res=a[0];
//       for(int i=1;i<n;i++)
//       {
        
//       int v1=bestend+a[i];
//       int v2=a[i];
//       int maxend=max(v1,v2);
//       maxend=abs(maxend);
//       int minend=min(v1,v2);
//       minend=abs(minend);
//       res=max(maxend,minend);
//       }
      
//     return res;
//     }
// };

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna