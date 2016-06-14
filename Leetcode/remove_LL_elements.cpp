/*Remove all elements from a linked list of integers that have value val.

Example
Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
Return: 1 --> 2 --> 3 --> 4 --> 5


*/


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
