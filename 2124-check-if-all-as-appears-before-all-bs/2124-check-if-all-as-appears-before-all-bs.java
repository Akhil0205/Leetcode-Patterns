class Solution {
    public boolean checkString(String s) {
        // return !s.contains("ba");
        int n=s.length();
        boolean b=false;
        for(int i=0;i<n;i++)
        {
            if(s.charAt(i)=='b') b=true;
            else if(b) return false; 
        }
        return true;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna