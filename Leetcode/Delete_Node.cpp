// Given Pointer to that node
/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node==NULL)
            return;
        ListNode* temp = node->next;
        if(temp!=NULL)
        {
            node->val=node->next->val;
            node->next=temp->next;
        }
        else
            node = NULL;
        delete(temp);
    }
};
