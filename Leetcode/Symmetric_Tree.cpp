/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
Complexity: O(n)
 */

class Solution {
public:
    bool isMirror(TreeNode* p, TreeNode* q)
    {
        if(p==NULL && q==NULL)
            return true;
        if(p==NULL || q==NULL)
            return false;
        if(p->val==q->val)
            return (isMirror(p->left,q->right) && isMirror(p->right,q->left));
        else    
            return false;
    }

    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return isMirror(root,root);
    }
};
