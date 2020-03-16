// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <map>
int solution(vector<int> &A) 
{
    // write your code in C++11
    map<int,int>M;
    map<int,int>::iterator it;
    int cover=0;
    int N=A.size();
    for(int i=0;i<N;i++)
    {
            it=M.find(A[i]);
            if(it==M.end())
                {
                    cover=i;
                    M[A[i]]++;
                }
    }
    return cover;

}

// score 100 %
