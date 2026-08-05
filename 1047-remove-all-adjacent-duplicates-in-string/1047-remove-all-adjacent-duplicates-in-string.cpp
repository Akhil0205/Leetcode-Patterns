class Solution {
public:
    string removeDuplicates(string s) {
       int n=s.size();
       int i;string res;
       stack<char>st;
       for(int i=0;i<n;i++)
       {
        if(st.empty())
        {
            st.push(s[i]);
            continue;
        }
        if(st.top()==s[i])
        {
            st.pop();
            continue;
        }
        st.push(s[i]);
       }
       while(!st.empty())
       {
        res.push_back(st.top());
        st.pop();
       }
       reverse(res.begin(),res.end());
       return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna