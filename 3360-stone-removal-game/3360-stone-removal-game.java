class Solution {
    public boolean canAliceWin(int n) {
        int rem=10;
        boolean alice=true;
        while(rem>0 && n>=rem)
        {
            n-=rem;
            rem--;
            alice=!alice;
        }
        return !alice;

    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna