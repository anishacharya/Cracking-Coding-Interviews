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
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=node->right=NULL;

	return node;
}


int height(struct node* node)
{
	if(node==NULL)
		return 0;
	int l=height(node->left);
	int r=height(node->right);

	if(l>=r)
		return l+1;
	return r+1;
}

int main()
{
    struct node *root = newnode(1);

    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);

   cout<< height(root)<<endl;
    return 0;
}

