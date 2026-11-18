class Solution {
    public int minChanges(String s) {
        int count=0;
        int n=s.length();
        for(int i=0;i<n;i+=2)
        {
            if(s.charAt(i)!=s.charAt(i+1)) 
            count++;
        }
        return count;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna