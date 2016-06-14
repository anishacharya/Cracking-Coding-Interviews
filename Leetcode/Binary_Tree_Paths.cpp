class Solution {
public:
void help(vector<string>& res, TreeNode* root, string pre) 
 {
    if (!root)
        return;
    if (!root->left && !root->right) 
    {
        res.push_back(pre + to_string(root->val));
        return;
    }
    help(res, root->left, pre + to_string(root->val) + "->");
    help(res, root->right, pre + to_string(root->val) + "->");
}


vector<string> binaryTreePaths(TreeNode* root)
{
    vector<string> res;
    help(res, root, "");
    return res;
}
};
