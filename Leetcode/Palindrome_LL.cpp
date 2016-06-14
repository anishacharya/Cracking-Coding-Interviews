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
    void reverse(ListNode** head)
    {
        ListNode* current=*head;
        ListNode* prev=NULL;
        ListNode* next;
        
        while(current!=NULL)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        *head=prev;
    }
    
    bool comparelists(ListNode* head1, ListNode* head2)
    {
        ListNode* temp1=head1;
        ListNode* temp2=head2;
        
        if(temp1==NULL && temp2==NULL)
            return true;
            
        while(temp1 && temp2)
        {
            if(temp1->val==temp2->val)
            {
                temp1=temp1->next;
                temp2=temp2->next;
            }
            else 
                return false;
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head) 
    {
        ListNode* slow=head;
        ListNode* prev=head;
        ListNode* fast=head;
        ListNode* mid=NULL;
        
        bool res=true;
        
        if(head==NULL)
            return true;
        
        if(head!=NULL && head->next!=NULL)
        {
            while(slow && fast && fast->next)
            {
                prev=slow;
                slow=slow->next;
                fast=fast->next->next;
            }
            if(fast!=NULL)
            {
                mid=slow;
                slow=slow->next;
            }
            ListNode* second_half=slow;
            cout<<"second:"<<second_half->val<<endl;
            prev->next=NULL;
            
            reverse(&second_half);
            cout<<"second half after rev:"<<second_half->val<<endl;
            res=comparelists(head,second_half);
                
        }
        return res;
        
    }
};
