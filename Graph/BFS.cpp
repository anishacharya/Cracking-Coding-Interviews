#include <iostream>
#include<list>
#include<queue>

using namespace std;

class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
    
    public:
        Graph(int V);  // Constructor
        void addEdge(int v, int w); // function to add an edge to graph
        void BFS(int s);  // prints BFS traversal from a given source s
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void Graph::BFS(int s)
{
    //bool visited[]=(bool)malloc(sizeof(bool)*V);
    bool *visited = new bool[V];

    for(int i=0;i<V;i++)
        visited[i]=false;
        
    queue<int> Q;
    Q.push(s);
    visited[s]=true;
    
    list<int>::iterator it;
    
    while(!Q.empty())
    {
        s=Q.front();
        cout<<s<<endl;
        Q.pop();
        
        for(it=adj[s].begin();it!=adj[s].end();it++)
        {
            if(!visited[*it])
            {
                visited[*it]=true;
                Q.push(*it);
            }
        }
    }
}

int main() {
	Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal (starting from vertex 2) \n";
    g.BFS(2);
 
	return 0;
}

