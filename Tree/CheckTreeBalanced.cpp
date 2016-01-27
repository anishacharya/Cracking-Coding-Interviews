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
	node->left=NULL;
	node->right=NULL;
	return node;
}



int height(struct node* node)
{
	if(node==NULL)
		return 0;
	int lh=height(node->left);
	int rh=height(node->right);

	return (1+max(lh,rh));
}

int max(int a, int b)
{
  return (a >= b)? a: b;
}

bool balanced(struct node* node)
{
	if(node == NULL)
	    return 1;
	int lh=height(node->left);
	int rh=height(node->right);
	if((abs(lh-rh) <=1 )&& balanced(node->left)
			&&balanced(node->right))
		return 1;

	return 0;
}

int main()
{
	  struct node *root = newnode(1);
	  root->left = newnode(2);
	  root->right = newnode(3);
	  root->left->left = newnode(4);
	  root->left->right = newnode(5);
	  root->right->left = newnode(6);
	  root->left->left->left = newnode(7);

    //cout<<height(root)<<endl;
    //cout<<balanced(root)<<endl;
    if(balanced(root))
      cout<<"Tree is balanced";
    else
      cout<<"Tree is not balanced";

    return 0;
}
