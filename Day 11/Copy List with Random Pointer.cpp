/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
         Node * iter =head, * front=head;
         while(iter!=NULL){
           front = iter->next;
           Node* copy = new Node(iter->val);
           iter->next = copy;
           copy->next = front;
           iter = front; 
         }
         
         iter = head;
         while(iter!=NULL){
             if(iter->random!=NULL)
                 iter->next->random = iter->random->next;
                 iter = iter->next->next;
         }

         Node* dummy = new Node(0);
         Node* temp = dummy;
         iter = head;
         front = head;
         while(iter!=NULL){
             temp->next = iter->next;
             temp =temp->next;
             front = iter->next->next;
             iter->next = front;
             iter = front;
         }
         return dummy->next;
    }
};
