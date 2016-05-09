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
    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector<int> Out;
        std::stack<TreeNode*> S;
        if(root==NULL)
            return Out;
        S.push(root);
        while(!S.empty())
        {
            TreeNode* node=S.top();
            Out.push_back(node->val);
            S.pop();
            if(node->right)
                S.push(node->right);
            if(node->left)
                S.push(node->left);
        }
        return Out;      
    }
};
