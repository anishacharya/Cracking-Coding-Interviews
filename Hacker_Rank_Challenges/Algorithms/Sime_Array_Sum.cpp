/*
Problem Statement
You are given an array of integers of size N. You need to print the sum of the elements of the array.
Input Format 
The first line of the input consists of an integer N. The next line contains N space-separated integers describing the array.
Constraints 
1?N?1000 
0?A[i]?1000
Output Format 
Output a single value equal to the sum of the elements of the array.

*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,X;
    int Sum=0;
    cin>>N;
    
    for(int i=0;i<N;i++)
        {
        cin>>X;
        Sum=Sum+X;
    }
    cout<<Sum;
    return 0;
}
