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

    int height(TreeNode* root)
    {
        if(root==NULL)
        return 0;
        int left_height=height(root->left);
        int right_height=height(root->right);
        return (max(left_height,right_height)+1);
    }
    
    void LevelOrderrecur(TreeNode* root, int height, vector<int>& L)
    {
        if(root==NULL)
            return;
        if(height==1)
            L.push_back(root->val);
        if(height>1)
            {
                LevelOrderrecur(root->left,height-1,L);
                LevelOrderrecur(root->right,height-1,L);
            }
    }
    vector<vector<int> > levelOrder(TreeNode* root) {
        int h=height(root);
        vector<vector<int> >Output;
        for(int i=1;i<=h;i++)
        {
            vector<int> L;
            LevelOrderrecur(root,i,L);
            Output.push_back(L);
            L.clear();
        }
        return Output;
    }
};
