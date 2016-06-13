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
    void kthSmallest_rec(TreeNode* root,int &n, int k, int &val)
    {
        if(root==NULL)
            return;
        kthSmallest_rec(root->left, n, k,val);
        (n)++;
        if(n==k)
        {
            val=root->val;
            return;
        }
        kthSmallest_rec(root->right, n, k,val);
    }
    int kthSmallest(TreeNode* root, int k) 
    {
        int val; int n=0;
        kthSmallest_rec(root,n,k,val);
        return val;
    }
};
