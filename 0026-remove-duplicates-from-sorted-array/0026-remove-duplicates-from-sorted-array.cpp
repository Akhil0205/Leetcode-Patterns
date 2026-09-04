class Solution {
public:
int removeDuplicates(vector<int>& nums) {
    int i = 0;

    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}
    // int removeDuplicates(vector<int>& nums) {
    //     int off = 0;
    //     int unique = 1;
    //     int cm = 1;

    //     while(cm < nums.size())
    //     {
    //         if(nums[cm] == nums[cm - 1]){
    //             cm++;
    //             continue;}

    //         if(nums[off] != nums[cm])
    //         {
    //             off++;
    //             nums[off] = nums[cm];
    //             unique++;
    //             cm++;
    //         }
    //     }
    //     return unique;
    // }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna