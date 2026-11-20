class Solution {
    public int[] replaceElements(int[] arr) {
        int n=arr.length;
        int max=-1;
        for(int i=n-1;i>=0;i--)
        {
            int temp=arr[i];
            arr[i]=max;
            max=Math.max(temp,max);
            
        }
        return arr;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna