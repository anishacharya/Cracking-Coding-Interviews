 /*A tree whose elements have at most 2 children is called a binary tree. Since each element 
 in a binary tree can have only 2 children, we typically name them the left and right child. */
 
 #include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

struct node
		{
			int data;
			struct node* left;
			struct node* right;
		};
struct node* newnode(int data)
		{
			struct node* node=(struct node*)(malloc(sizeof(struct node)));
			node->data=data;
			node->left=NULL;
			node->right=NULL;
			return node;
		}
int main()
{
	struct node* root=newnode(5);
	root->left=newnode(4);
	root->right=newnode(3);
	cout<<root->left->data;
	return 0;
}



 
 
