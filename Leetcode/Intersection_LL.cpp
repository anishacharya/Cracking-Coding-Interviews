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

    int count(ListNode* head)
    {
        if(head==NULL)
            return 0;
            
        int count=1;
        ListNode* current=head;
        while(current->next!=NULL)
        {
            current=current->next;
            count++;
        }
        return count;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n1=count(headA);
        int n2=count(headB);
        
        int d=abs(n1-n2);
        
        ListNode* current1=headA;
        ListNode* current2=headB;
        
        if(n1>n2)
        {
            for(int i=0;i<d;i++)
                current1=current1->next;
        }
        
       else if(n1<n2)
        {
            for(int i=0;i<d;i++)
                current2=current2->next;
        }
        
        while(current1!=NULL && current2!=NULL)
        {
            if(current1==current2)
                return current1;
                
            current1=current1->next;
            current2=current2->next;
        }
        
        return NULL;
        
    }
};
