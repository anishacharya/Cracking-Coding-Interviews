

//Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

//Note: Do not modify the linked list.
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

    ListNode* getloop(ListNode* loop, ListNode* head)
    {
        ListNode* ptr1=loop;
        ListNode* ptr2=loop;
        int k=1;
        while(ptr1->next!=ptr2)
        {
            ptr1=ptr1->next;
            k++;
        }
        ptr1=head;
        ptr2=head;
        for(int i=0;i<k;i++)
            ptr2=ptr2->next;
        while(ptr1!=ptr2)
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return ptr2;
    }

    
    ListNode* detectCycle(ListNode *head) 
    {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* cycle_start;
        
        while(slow && fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                cout<<"here"<<endl;
                return getloop(slow,head);
               // return cycle_start;
            }
        }
        return NULL;
         
    }
};
