/*
Input Format

The first line of the input contains N where N is the number of integers. The next line contains N integers.
Constraints
1<=N<=105
1<=Vi<=109, where Vi is the ith integer in the vector.

Output Format

Print the integers in the sorted order one by one in a single line followed by a space.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool reverse_sort (int i,int j) { return (i>j); }
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size,n;
    cin>>size;
    vector<int> V;
    while(cin>>n)
        {
        V.push_back(n);
    }
    sort(V.begin(),V.end(),reverse_sort);
    for(int i=0;i<size;i++)
    {
        cout<<V.back()<<" ";
        V.pop_back();
    }
    return 0;
}
