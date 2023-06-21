/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
   ListNode *detectCycle(ListNode *head) {
        struct ListNode * p =head;
        struct ListNode* q =head;
        
    if(head==NULL || head->next==NULL)
        return NULL;
        
        while(q!=NULL && q->next!=NULL)
        {
            p = p->next;
            q = q->next->next;
            if(p==q) 
                break; 
                         }
     if(p==q) 
     {
         p = head;
           while(p!=q)
             {
                p=p->next;
                q=q->next;
                             }
         return p; 
                     }
    return NULL;
    }
};
