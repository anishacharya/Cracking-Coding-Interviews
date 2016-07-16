#include <iostream>
#include <vector>

using namespace std;

// Define a Node/ Block in the Board
class Node
{
    public:
        bool visited;
        bool mine;	
};

// Define the Board
// Place mines Randomly
// Get count of surrounding mines of all the non- mine blocks and place it

vector<vector<Node> > Create_Board(int m,int n)
{
    vector<vector<Node> > Board(m);
    for(int i = 0; i < m; i++) 	
    {
	vector<Node> tmp(n);
	for(int j=0; j<n; j++)
	{
            tmp[j].visited = false; 
            tmp[j].mine = false;
        }
        Board[i] = tmp;
        tmp.clear();
    }
    return Board;
}

void place_mines(vector<vector<Node> >&Board, int &N)
{
    if (N == 0) return;
    if(Board.size() == 0)
        return;
    
    int m = Board.size(); int n = Board[0].size();
    if(N >= m*n)
    {
	for(int i = 0; i < m; i++)
        {
	    for(int j = 0; j < n; j++)
	        Board[i][j].mine = true;	
        }
	return;
    }

    int random = rand() % (m * n);
    int row = random / n; int col = random / m;

    if(Board[row][col].mine == false)
    {
       Board[row][col].mine = true;
       N--;
    }
    return place_mines(Board,N);	
}


int main()
{

    return 0;
}


