class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL) return NULL;
        if (left == right) return head;

        ListNode* t = head;
        ListNode* before = NULL;
        int pos = 1;

        while (pos < left) {
            before = t;
            t = t->next;
            pos++;
        }

        ListNode* curr = t;
        ListNode* prev = NULL;
        int times = right - left + 1;

        while (times--) {
            ListNode* nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }

        t->next = curr;

        if (before) {
            before->next = prev;
            return head;
        }

        return prev;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna