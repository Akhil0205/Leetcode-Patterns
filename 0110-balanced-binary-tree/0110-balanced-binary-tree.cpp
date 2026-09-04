class Solution {
public:

    int height(TreeNode* root) {

        if (root == NULL)
            return 0;

        int left = height(root->left);
        int right = height(root->right);

        if (abs(left - right) > 1)
            return -1;

        if (left == -1 || right == -1)
            return -1;

        return 1 + max(left, right);
    }

    bool isBalanced(TreeNode* root) {

        return height(root) != -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna