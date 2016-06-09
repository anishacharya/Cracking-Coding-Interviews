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
TreeNode * helper(vector<int>& inorder, vector<int>& postorder, int istart, int iend, int pstart, int pend)
{
    if(istart>iend||pstart>pend)return NULL;
    TreeNode * root=new TreeNode(postorder[pend]);
    if(istart==iend)return root;
    int key=find(inorder.begin(), inorder.end(), root->val)-inorder.begin();
    root->left=helper(inorder, postorder,istart, key-1,pstart, pstart+key-istart-1);
    root->right=helper(inorder, postorder, key+1, iend, pstart+key-istart, pend-1);
    return root;
}
TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    return helper(inorder, postorder, 0, inorder.size()-1, 0, postorder.size()-1);
}
};
