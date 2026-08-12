class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n=arr.size();
        stack<int>st;
        vector<int>res(n,0);
        for(int i=0;i<n;i++)
        {
            while(!st.empty()&& arr[st.top()]<arr[i])
            {
                int prev=st.top();
                st.pop();

                res[prev]=i-prev;
            }
            st.push(i);
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna