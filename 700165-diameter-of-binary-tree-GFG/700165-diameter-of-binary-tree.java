/*Structure of binary tree Node
class Node {
    int data;
    Node left;
    Node right;
    Node(int data) {
        this.data = data;
        left = right = null;
    }
};*/

class Solution {
    int diameter=0;
    public int height(Node root)
    {
        if(root==null) return 0;
        int left=height(root.left);
        int right=height(root.right);
        
        diameter=Math.max(diameter,left+right);
        return 1+Math.max(left,right);
    }
    public int diameter(Node root) {
        // code here
        height(root);
        return diameter;
        
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna