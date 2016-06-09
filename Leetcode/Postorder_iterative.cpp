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
vector<int> postorderTraversal(TreeNode* root) {
    vector<int>res;
    stack<TreeNode *>stack;
    TreeNode * temp;
    if(!root)return res;
    stack.push(root);
    while(!stack.empty())
    {
        temp=stack.top();
        stack.pop();
        res.insert(res.begin(), temp->val);
        if(temp->left)stack.push(temp->left);
        if(temp->right)stack.push(temp->right);
    }
    return res;
}
};
