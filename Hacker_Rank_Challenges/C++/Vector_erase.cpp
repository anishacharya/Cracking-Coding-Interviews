/*
Problem Statement

You are given N integers.Then you are given 2 queries.First query consists of 1 integer denoting the position which should be removed.Next query consists of 2 integers denoting the range that should be removed.
nput Format

The first line of the input contains an integer N.The next line contains N space separated integers.The third line contains a single integer x,denoting the position of an element that should be removed from the vector.The fourth line contains two integers a and b denoting the range that should be erased from the vector inclusive of a and exclusive of b.
Output Format

Print the size of the vector in the first line and the elements of the vector after the two erase operations in the second line separated by space.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size;
    cin>>size;
    vector<int>V;
    for(int i=0;i<size;i++)
    {
        int n;
        cin>>n;
        V.push_back(n);
    }
    
    int lb,ub;
    cin>>lb;
    V.erase(V.begin()+lb-1);
    cin>>lb>>ub;
    V.erase(V.begin()+lb-1,V.begin()+ub-1);
    
    cout<<V.size()<<endl;
    
    for(int i=0;i<V.size();i++)
        cout<<V[i]<<" ";
        
        
    return 0;
}
