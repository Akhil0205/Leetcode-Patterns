class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_map<char,int>f;
        for(int i=0;i<n;i++) f[s[i]]++;
        int res=0;
        bool odd=false;
        for(auto i:f)
        {
            int val=i.second;
            if(val%2==0) res+=val;
            else
            {
                if(val%2==1) 
                {
                    res+=val-1;
                    odd=true;
                }
            }
        }
        return res+(odd?1:0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna