class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty()) return false;
                if(s[i]==')' && st.top()=='(' || 
                s[i]=='}'&& st.top()=='{' || 
                s[i]==']' && st.top()=='[')
                {
                    st.pop();
                }
                else 
                {
                    return false;
                }
            }

        }
        
    return st.empty();
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna