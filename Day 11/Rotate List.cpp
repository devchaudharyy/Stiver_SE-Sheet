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
    ListNode* p =head, *cur = head;
      if( head==NULL || head->next==NULL || k==0) return head;
     int len =1;
     while(p->next!=NULL && len++)
        p = p->next;
        p->next = head;
        k = k%len;
        k = len - k;
        while(k!=1)
        {
            cur = cur->next;
            k--;
        }

        head=cur->next;
        cur->next=NULL;
return head;
    }
};
