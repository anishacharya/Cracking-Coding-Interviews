/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 /*
 Given a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

For example:
Given the following binary tree,
   1            <---
 /   \
2     3         <---
 \     \
  5     4       <---
You should return [1, 3, 4]
*/
// For Tree Solutions check our Drive: 
// https://docs.google.com/document/d/1m86ogzD-DmIYs68M9F5Biarll9Et30DXH3w-bo88FRY/edit?usp=sharing

class Solution {
public:
    void rightViewUtil(TreeNode*root, int level, int &max_level, vector<int>& out)
    {
        if (root==NULL)  return;
        if (level > max_level )
        {
            out.push_back(root->val);
            max_level = level;
        }
        rightViewUtil(root->right, level+1, max_level,out);
        rightViewUtil(root->left, level+1, max_level,out);

        /* For Left View---
            rightViewUtil(root->left, level+1, max_level);
            rightViewUtil(root->right, level+1, max_level);
        */
    }
    vector<int> rightSideView(TreeNode* root) 
    {
        int max_level = 0; vector<int>out;
        rightViewUtil(root, 1, max_level,out); 
        return out;
    }
};
