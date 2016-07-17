#include <iostream>
#include <vector>

using namespace std;

// Define a Node/ Block in the Board
class Node
{
    public:
        bool visited;
        bool mine;	
        int num;
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
            tmp[j].num = 0;
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
    int row = random / n; int col = random % n;

    if(Board[row][col].mine == false)
    {
       Board[row][col].mine = true;
       N--;
    }
    return place_mines(Board,N);	
}

int check(vector<vector<Node> >&Board,int i, int j)
{
    if(i >= 0 && i<Board.size() && j >= 0 && j < Board[0].size())
    {
        if(Board[i][j].mine == true)
	    return 1;
    }
    return 0;
}

int get_num(vector<vector<Node> >&Board,int i, int j)
{
    int num = 0;
    for(int p=i-1; p<i+1;p++)
    {
        for(int q = j-1; q < j+1; q++)
            num += check(Board,p,q);	   
    }
    return num;
}
void set_number(vector<vector<Node> >&Board)
{
    if(Board.size() == 0)
        return;
    for(int i = 0; i< Board.size(); i++)
    {
        for(int j=0; j < Board[i].size(); j++)
        {
            if(Board[i][j].mine == false)
                Board[i][j].num = get_num(Board,i,j);        
        } 
    }

}

int main()
{

    return 0;
}


