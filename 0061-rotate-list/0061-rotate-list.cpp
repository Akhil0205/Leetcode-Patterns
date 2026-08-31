/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *last=head;
        int n=1;
        while(last->next!=NULL)
        {
            n++;
            last=last->next;
        }
        k=k%n;
        if(k==0) return head;
        int count=1;
        int c=(n-k);
        ListNode *t=head;
        while(t)
        {
            if(count==c)
                break;
            count++;
            t=t->next;
            
        }
        last->next=head;
        ListNode* res=t->next;
        t->next=NULL;
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna