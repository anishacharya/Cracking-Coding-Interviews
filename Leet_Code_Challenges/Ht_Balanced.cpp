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
    
    int max(int a,int b)
    {
        if(a>b)
            return a;
        return b;    
    }
    
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int lh= height(root->left); 
        int rh= height(root->right);
        return max(lh,rh)+1;
        
    }
    
    bool isBalanced(TreeNode* root) 
    {
        if(root==NULL)
            return true;
        if(abs(height(root->left)-height(root->right))<=1 && isBalanced(root->left) && isBalanced(root->right))
            return true;
        return false;
            
    }
};