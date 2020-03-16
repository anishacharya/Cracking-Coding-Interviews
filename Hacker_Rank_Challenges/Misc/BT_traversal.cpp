//InOrder,PreOrder and PostOrder Traversal of a BT

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
void postorder(struct node* node)
{
	if(node==NULL)
		return;
	postorder(node->left);
	postorder(node->right);
	cout<<node->data<<endl;
}

void inorder(struct node* node)
{
	if(node==NULL)
		return;
	inorder(node->left);
	cout<<node->data<<endl;
	inorder(node->right);
}

void preorder(struct node* node)
{
	if(node==NULL)
		return;
	cout<<node->data<<endl;
	preorder(node->left);
	preorder(node->right);
}

int main()
{
     struct node *root= newnode(1);
     root->left        = newnode(2);
     root->right       = newnode(3);
     root->left->left  = newnode(4);
     root->left->right = newnode(5);

     preorder(root);

     inorder(root);

     postorder(root);

     return 0;
}
