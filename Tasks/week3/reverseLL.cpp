https://www.geeksforgeeks.org/reverse-a-linked-list/
class Solution {
  public:
    // Function to reverse a linked list.
    Node* reverseList(struct Node* head) {
        // code here
        // return head of reversed list
        struct Node *cur=head;
        struct Node *prev=NULL;
        struct Node *next=NULL;
        do{
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }while(cur!=head);
        cur->next=prev;
        head=prev;
        return head;
    }
};
