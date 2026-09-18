class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>f;
        int n=s.size();
        for(char i:s) 
        f[i]+=1;
        string res="";
        while(!f.empty()){
            char maxChar;
            int maxf=0;
        for(auto x:f)
        {
            if(x.second>maxf)
            {
                maxf=x.second;
                maxChar=x.first;
            }
        }
        for(int i=0;i<maxf;i++)
            res+=maxChar;
        f.erase(maxChar);
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna