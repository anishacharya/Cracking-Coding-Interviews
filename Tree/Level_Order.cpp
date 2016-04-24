#include<iostream>

using namespace std;

int max(int a,int b)
{
	return (a>b?a:b);
}

    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return max(height(root->left),height(root->right))+1;    
    }

   void printGivenLevel(TreeNode* root, int level,vector<int>&V)
    {
      if(root == NULL)
        return;   
      if(level == 1)
        {
            cout<< root->val;
            V.push_back(root->val);
        }     
      if (level > 1)
      {
       printGivenLevel(root->left, level-1,V);
       printGivenLevel(root->right, level-1,V);
      }
    }

    vector<vector<int>> levelOrder(TreeNode* root) 
    {  // put each level as a vector inside a vector of vectors
        vector<vector<int>> L0;
        int h=height(root);     
        for(int i=1;i<=h;i++)
        {
        	cout<<"Here"<<endl;
          vector<int>V;
          printGivenLevel(root,i,V);
          L0.push_back(V);  
         }         
        return L0;
    }

int main()
{


return 0;
}
