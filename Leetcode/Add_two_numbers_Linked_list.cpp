//You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each on
//their nodes contain a single digit. Add the two numbers and return it as a linked list.
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l2 == NULL) return l1;
        if(l1 == NULL) return l2;
        ListNode* root = l1;
        ListNode* l1Last;
        int carry = 0;
        while((l1 != NULL)&&(l2 != NULL)) {
            l1->val += (l2->val + carry);
            carry = l1->val / 10;
            l1->val %= 10;
            l1Last = l1;
            l1 = l1->next;
            l2 = l2->next;
        }
        if((l1 == NULL)&&(l2 != NULL)) {
            l1Last->next = l2;
            ListNode* l2Last;
            while(l2) {
                l2->val += carry;
                carry = l2->val / 10;
                l2->val %= 10;
                l2Last = l2;
                l2 = l2->next;
            }
            if(carry) l2Last->next = new ListNode(carry);
        } else if((l1 != NULL)&&(l2 == NULL)) {
            while(l1) {
                l1->val += carry;
                carry = l1->val / 10;
                l1->val %= 10;
                l1Last = l1;
                l1 = l1 ->next;
            }
        if(carry) l1Last->next = new ListNode(carry);
        } 
        else if((l1 == NULL)&&(l2 == NULL)) if(carry) l1Last->next = new ListNode(carry);
        
        return root;
    }
};
