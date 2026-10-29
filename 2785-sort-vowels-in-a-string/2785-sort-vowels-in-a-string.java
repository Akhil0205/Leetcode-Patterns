class Solution {
    public String sortVowels(String s) {
        char[] arr=s.toCharArray();
        StringBuilder vowels=new StringBuilder();
        for(char c:arr)
        {
            if("aeiouAEIOU".indexOf(c)!=-1)
            {
                vowels.append(c);
            }
        }
        char[] v=vowels.toString().toCharArray();
        Arrays.sort(v);
        int n=arr.length;
        int j=0;
        for(int i=0;i<n;i++)
        {
            if("aeiouAIEOU".indexOf(arr[i])!=-1)
            {
                arr[i]=v[j++];
            }
        }
        return new String(arr);
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna