class Solution{
    public:
    int totalFruit(vector<int>& s)
    {
        unordered_map<int,int>f;
        int low=0;
        int res=0;
        int n=s.size();
        for(int high=0;high<n;high++)
        {
            f[s[high]]++;

            while(f.size()>2)
            {
                f[s[low]]--;

                if(f[s[low]]==0) 
                f.erase(s[low]);

                low++;
            }
                int len=high-low+1;
                res=max(len,res);

            }
            
        
        return res;
    }
};






















// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
        
//         unordered_map<int,int> mp;

//         int left = 0;
//         int maxi = 0;

//         for(int right = 0; right < fruits.size(); right++)
//         {
//             mp[fruits[right]]++;

//             // More than 2 fruit types
//             while(mp.size() > 2)
//             {
//                 mp[fruits[left]]--;

//                 if(mp[fruits[left]] == 0)
//                 {
//                     mp.erase(fruits[left]);
//                 }

//                 left++;
//             }

//             maxi = max(maxi, right - left + 1);
//         }

//         return maxi;
//     }
// };

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna