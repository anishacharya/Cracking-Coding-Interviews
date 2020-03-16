/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  struct Node* node=(struct Node*) malloc(sizeof(struct Node));
    node->data=data;
    node->next=NULL;
    
    if(head==NULL)
        return node;
   
    struct Node *last = head; 
    while (last->next!=NULL)
        last=last->next;
    
        
    last->next=node;
        return head;
  // Complete this method
}
