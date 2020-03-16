/*

A non-empty zero-indexed array A consisting of N integers is given.
A permutation is a sequence containing each element from 1 to N once, and only once.
Write a function:
int solution(vector<int> &A);
that, given a zero-indexed array A, returns 1 if array A is a permutation and 0 if it is not.

*/
// you can use includes, for example:
// #include <algorithm>
#include<map>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11
    int N=A.size();
    map<int,int>M;
    map<int,int>::iterator it;
    
    for(int i=0;i<N;i++)
    {
        it=M.find(A[i]);
        if(it!=M.end())
            return 0;
        M[A[i]]++;
        }
        
    for(int i=1;i<=N;i++)
    {
        it=M.find(i);
        if(it==M.end())
            return 0;
        }
    return 1;
}

// SOLUUTION 2 /// Check total sum 
// This fails when the sum is same but nonpermutation
int solution(vector<int> &A) {
    // write your code in C++11
    int N=A.size();
    int sum=N*(N+1)/2;
    for(int i=0;i<N;i++)
    {
        sum=sum-A[i];    
    }
    if(sum==0)
        return 1;
    return 0;    
}


//// SCORE = 100%
