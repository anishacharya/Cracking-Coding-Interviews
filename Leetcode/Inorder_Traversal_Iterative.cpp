/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 * COmplexity: O(n)
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> Out;
        //if(root==NULL)
        //    return Out;
        TreeNode* current=root;
        stack<TreeNode*> S;
        bool done=0;
        
        while(!done)
        {
            if(current!=NULL)
            {
                S.push(current);
                current=current->left;
            }
            else 
            {
                if(!S.empty())
                {
                   cout<<"breakhere"<<endl;
                   current=S.top();
                   cout<<current->val<<endl;
                   Out.push_back(current->val);
                   S.pop();
                   
                   current=current->right;
                }
                else
                    done=1;
            }
        }
        return Out;
    }  
};
