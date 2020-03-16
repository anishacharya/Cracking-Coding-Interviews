
/*
Problem Statement

The height of a binary tree is the number of nodes on the largest path from root to any leaf. You are given a pointer to the root of a binary tree. Return the height of the tree. 
You only have to complete the function.

The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int maxima(int a,int b)
    {
    if(a>=b)
        return a;
    else
        return b;
}
int height(node * root)
{
    if(root==NULL)
        return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    return maxima(lh,rh)+1;
}
  
