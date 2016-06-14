class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        return buildTree(head,nullptr);
    }
    TreeNode* buildTree(ListNode* head, ListNode* afterLast){
        if(head==afterLast)
        return nullptr;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=afterLast&&fast->next!=afterLast){
            slow=slow->next;
            fast=fast->next->next;
        }
        TreeNode* root=new TreeNode(slow->val);
        root->left=buildTree(head,slow);
        root->right=buildTree(slow->next,afterLast);
        return root;
    }
};
