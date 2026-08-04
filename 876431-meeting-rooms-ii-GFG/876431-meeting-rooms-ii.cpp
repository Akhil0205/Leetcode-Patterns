class Solution {
  public:
    int minMeetingRooms(vector<int> &a, vector<int> &b) {
        // code here
        int n=a.size();
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int room=0,i=0,j=0,res=0;
        while(i<n && j<n)
        {
            if(a[i]<b[j])
            {
                room++;
                res=max(res,room);
                i++;
            }
            else
            {
                room--;
                j++;
            }
        }
        return res;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna