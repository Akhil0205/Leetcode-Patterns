class Solution{
    public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char,int>f;
        int low=0;
        int res=0;
        int n=s.size();
      
        for(int high=0;high<n;high++)
        {
            int k=high-low+1;
            f[s[high]]++;
            while(f.size()<k)
            {
                f[s[low]]--;
                if(f[s[low]]==0)
                f.erase(s[low]);
                low++;
                k=high-low+1;
            }
            int len=high-low+1;
            res=max(res,len);
        }
        return res;
    }
};


















// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         unordered_set<char> st;

//         int left = 0;
//         int ans = 0;

//         for(int right = 0; right < s.size(); right++) {

//             while(st.find(s[right]) != st.end()) {
//                 st.erase(s[left]);
//                 left++;
//             }

//             st.insert(s[right]);

//             ans = max(ans, right - left + 1);
//         }

//         return ans;
//     }
// };

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna