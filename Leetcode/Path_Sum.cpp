/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 //Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the
 //path equals the given sum.
class Solution {
public:

    bool findpathsrecur(TreeNode* root, int path[], int pathlength, int sum)
    {
        int pathsum=0;
        if(root==NULL)
            return false;
        path[pathlength]=root->val;
        pathlength++;
        
        if(root->left==NULL && root->right==NULL)
        {
            for(int i=0;i<pathlength;i++)
                pathsum=pathsum+path[i];
            if(pathsum == sum)
            {
                cout<<"TRUE"<<endl; 
                return true;
            }
        }
        
        if(findpathsrecur(root->left,path,pathlength,sum)==true)
            return true;// TRUE
        if(findpathsrecur(root->right,path,pathlength,sum)==true)
            return true;// FALSE
        return false;
            
    }

    bool hasPathSum(TreeNode* root, int sum) 
    {
        int path[1000];
        return findpathsrecur(root,path,0, sum);
    }
};
