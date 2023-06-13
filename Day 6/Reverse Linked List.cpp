class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      ListNode* d = NULL;
      ListNode* p = head->next;
      while(head!=NULL)
      {
          head->next=d;
          d = head;
          head = p;
         
      }
        return d;
    }
};
