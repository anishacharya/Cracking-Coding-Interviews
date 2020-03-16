/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    if(head==NULL || head->next==NULL)
        return head;
    Node* p1=head;
    Node* p2=p1->next;
    
    while(p2!=NULL)
        {
        if(p1->data==p2->data)
            {
            p2=p2->next;
            p1->next->next=NULL;
            p1->next=p2;
        }
        else
            {
            p1=p1->next;
            p2=p2->next;
        }
    }
  // This is a "method-only" submission. 
  // You only need to complete this method.
    return head;
}
