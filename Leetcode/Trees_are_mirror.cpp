/**

 * Definition for a binary tree node.

 * struct TreeNode {

 *     int val;

 *     TreeNode *left;

 *     TreeNode *right;

 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}

 * };

 */

class Solution {

public:



    bool is_Symmetric(TreeNode* l, TreeNode* r)
    {
        if(l==NULL && r==NULL)
            return true;
        if(l==NULL || r==NULL)
            return false;
        if(l->val!=r->val)
            return false;
        if(!is_Symmetric(l->left,r->right))
            return false;
        if(!is_Symmetric(l->right,r->left))
            return false;
        return true;
    }
    bool isSymmetric(TreeNode* root) 
    {
        if(root==NULL)
            return true;
        return is_Symmetric(root->left,root->right);
    }

};
