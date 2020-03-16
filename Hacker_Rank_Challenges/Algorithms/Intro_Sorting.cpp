/*
Given a sorted array (ar) and a number (V), can you print the index location of V in the array?
The next section describes the input format. You can often skip it, if you are using included methods.

Input Format 
There will be three lines of input:
V - the value that has to be searched.
n - the size of the array.
ar - n numbers that make up the array.

Output Format 
Output the index of V in the array.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int search(int A[],int l,int u,int V)
    {
    int mid=(l+u)/2;
    if(V==A[mid])
        return mid;
    if(V > A[mid])
        return search(A,mid+1,u,V);
    if(V < A[mid])
        return search(A,l,mid-1,V); 
    return -1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int V,N;
    cin>>V;
    cin>>N;
    int temp;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>temp;
        A[i]=temp;
    }
    cout<<search(A,0,N-1,V);
    
    return 0;
}
