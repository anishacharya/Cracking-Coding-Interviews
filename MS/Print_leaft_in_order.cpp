#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;
};

class LNode
{
    public:
        int val;
        LNode* next;
};


struct node* newnode(int data)
{
    struct node* node=(struct node*)(malloc(sizeof(struct node)));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}

void Leaf_Node_In_Order(struct node* node, LNode** head, LNode** prev)
{
    if(node==NULL)
        return;
    Leaf_Node_In_Order(node->left, head, prev);
    if(!node->left && !node->right)	
    {
        LNode* tmp = (LNode*)malloc(sizeof(LNode));
        tmp ->val = node->data;
        tmp -> next = NULL;
        cout<< tmp ->val<<" , "; 
        if(head == NULL)
            *head = tmp;
        else
            (*prev) ->next = tmp;
        
        *prev = tmp;
         // cout<<node->data<<endl;
    }
    Leaf_Node_In_Order(node->right, head, prev);
}

int main()
{
     struct node *root = newnode(1);
     root->left        = newnode(2);
     root->right       = newnode(3);
     root->left->left  = newnode(4);
     root->left->right = newnode(5);

     LNode* head = NULL;
     LNode* prev = NULL;
     //preorder(root);
     Leaf_Node_In_Order(root, &head, &prev);
     LNode* curr = head; 

     while(curr != NULL)
     {
        cout << curr -> val;
        curr =  curr -> next; 
     }
     //postorder(root);
     return 0;
}
