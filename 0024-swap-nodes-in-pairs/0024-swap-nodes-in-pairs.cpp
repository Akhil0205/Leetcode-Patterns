class Solution {
public:

    ListNode* reverse(ListNode* head, int times)
    {
        ListNode* curr = head;
        ListNode* prev = NULL;

        while (times--)
        {
            ListNode* nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }

        return prev;
    }

    ListNode* swapPairs(ListNode* head)
    {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* left = head;
        ListNode* res = NULL;
        ListNode* prevleft = NULL;

        while (left != NULL)
        {
            ListNode* right = left;

            // Check whether we have 2 nodes
            if (right->next == NULL)
            {
                // Only one node remains
                if (prevleft)
                    prevleft->next = left;

                break;
            }

            right = right->next;

            // Save the next pair
            ListNode* nextleft = right->next;

            // Reverse the two nodes
            ListNode* newHead = reverse(left, 2);

            // Connect previous pair to current pair
            if (prevleft)
                prevleft->next = newHead;

            // First pair becomes result
            if (res == NULL)
                res = newHead;

            // After reversing:
            // right -> left
            prevleft = left;

            // Move to next pair
            left = nextleft;
        }

        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna