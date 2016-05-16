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
    ListNode* removeElements(ListNode* head, int val) 
    {
        if(head==NULL)
            return NULL;
        ListNode* current;
        ListNode* next;
        ListNode* prev;
        while(head->val==val && head !=NULL) //move head to next
        {
            if(head->next==NULL)
                return NULL;
            head=head->next;    
        }
        
        current=head;
        prev=head;
        
        while(current!=NULL)
        {
            cout<<"should not be here"<<endl;
            if(current->val==val)
            {
                prev->next=current->next;
                current->next=NULL;
                current=prev->next;
            }
            else
            {
                prev=current;
                current=current->next;
            }
        }
        return head;
        
    }
};
