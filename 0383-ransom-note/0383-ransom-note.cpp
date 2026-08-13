class Solution {
public:
    bool fun(unordered_map<char,int>have,unordered_map<char,int>need)
        {
            for(auto i: need)
            {
                char c=i.first;
                int fneed=i.second;
                int fhave=have[c];

                if(fhave<fneed) return false;
            }
            return true;
        }
    bool canConstruct(string ransom, string magazine) {
        int n=ransom.size();
        int m=magazine.size();
        unordered_map<char,int>have;
        unordered_map<char,int>need;
        for(int i=0;i<n;i++)
        {
            need[ransom[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            have[magazine[i]]++;
        }
        return fun(have,need);
        


    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna