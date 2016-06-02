#include<iostream>
#include<queue>
#include<utility>

using namespace std;

class Node 
{

	std::list<Node*> children;
}

int shortest_root_to_leaf(Node* root)
{
	if(root==NULL)       // The root is Non-existnet
		return -1;
	
	if(root.children.size()==0) // root is a leaf node - single node graph
		return 0;
	
	queue<pair<Node*,int> >Q;
	Q.push(root,0);
	while(!Q.empty())
	{
		
	
	}

}
