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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return true;

        ListNode * p= head;
        ListNode* q= head;
        while(q->next!=NULL && q->next->next != NULL)
        {
            p =p->next;
            q=q->next->next;
        }
        p->next = reverse(p->next);
        p = p->next;

        while(p!=NULL)
        {
            if(p->val!=head->val)
            return false;
            p = p->next;
            head = head->next;
        }
        return true;
    }
    ListNode* reverse(ListNode* head)
    {
        ListNode * d = NULL;
        ListNode * next = NULL;
        while(head!=NULL)
        {
            next = head->next;
            head->next=d;
            d=head;
            head=next;
        }
        return d;
    }
};
