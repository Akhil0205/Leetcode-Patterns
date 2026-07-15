class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        unordered_map<char,int>f;
        
        int low=0;
        int res=-1;
        int n=s.size();
        for(int high=0;high<n;high++)
        {
            f[s[high]]++;
            while(f.size()>k)
            {
                f[s[low]]--;
                if(f[s[low]]==0) f.erase(s[low]);
                low++;
            }
            if(f.size()==k)
            {
                int len=high-low+1;
                res=max(res,len);
            }
        }
        return res;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna