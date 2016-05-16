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
    TreeNode* lowestCommonAncestor_recur(TreeNode* root, TreeNode* p, TreeNode* q,bool &v1,bool &v2)
    {
        if (root == NULL) return NULL;
        if(root==p)
        {
            v1=true;
            return root;
        }    
        if(root==q)
        {
            v2=true;
            return root;
        }
        
        TreeNode* lca_l=lowestCommonAncestor_recur(root->left,p,q,v1,v2);
        TreeNode* lca_r=lowestCommonAncestor_recur(root->right,p,q,v1,v2);
        
        if(lca_l!=NULL && lca_r!=NULL)
            return root;
        
        if(lca_l !=NULL)
            return lca_l;
        else
            return lca_r;
    }
    bool find(TreeNode *root, TreeNode *p)
    {
    	// Base Case
    	if (root == NULL)
    		return false;
    
    	// If key is present at root, or in left subtree or right subtree,
    	// return true;
    	if (root == p || find(root->left, p) || find(root->right, p))
    		return true;
    	// Else return false
    	return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        bool v1=false; 
        bool v2=false;
        TreeNode* lca=lowestCommonAncestor_recur(root,p,q,v1,v2);
        if((v1==true && v2==true) || (v1==true && find(root,q)) || (v2==true && find(root,p)) )
            return lca;
        else
            return NULL;
    }
};
