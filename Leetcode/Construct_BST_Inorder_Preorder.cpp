**
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
TreeNode * helper(vector<int>& preorder, vector<int>& inorder, int start, int end)
{
    if(start>end)return NULL;
    TreeNode * root=new TreeNode(preorder.front());
    preorder.erase(preorder.begin());
    if(start==end)return root;
    int key=find(inorder.begin(), inorder.end(), root->val) - inorder.begin();
    root->left=helper(preorder, inorder, start, key-1);
    root->right=helper(preorder, inorder, key+1, end);
    return root;
}
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    return helper(preorder, inorder, 0, preorder.size()-1);
}
};
