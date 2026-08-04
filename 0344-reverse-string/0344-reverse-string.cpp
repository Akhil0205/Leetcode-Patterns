class Solution {
public:
    void reverseString(vector<char>& s) {
      int n=s.size();
      stack<char>st;
      for(int i=0;i<n;i++)
      {
        st.push(s[i]);
      }  
      int i=0;
      while(!st.empty())
      {
        s[i]=st.top();
        st.pop();
        i++;
        //res.push_back(c);
      }
      //return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna