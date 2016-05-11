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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(head==NULL)
            return NULL;
        if(n<=0)
            return head;
        if(head->next==NULL && n==1)
            return NULL;
        int length=0;
        ListNode* current=head;
        
        while(current)
        {
            length++;
            current=current->next;
        }
        cout<<length<<endl;
        current=head;
        
        if(n>length)
            return head;
        if(n==length)
        {
            ListNode* temp=head->next;
            head->next=NULL;
            //head=temp;
            return temp;
        }
            
        ListNode* slow=head;
        ListNode* prev;
        ListNode* fast=head;
        int count=1;
    
        while(count<=n)
        {
            fast=fast->next;
            count++;
        }
        while(fast!=NULL)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next;
        }
        prev->next=slow->next;
        slow->next=NULL;
      
        return head;
    }
};  
