/*
A small frog wants to get to the other side of a river. 
The frog is currently located at position 0, and wants to get to position X. 
Leaves fall from a tree onto the surface of the river.
You are given a non-empty zero-indexed array A consisting of N integers representing 
the falling leaves. A[K] represents the position where one leaf falls at time K, measured in seconds.
The goal is to find the earliest time when the frog can jump to the other side of the river. 
The frog can cross only when leaves appear at every position across the river from 1 to X. 
You may assume that the speed of the current in the river is negligibly small, i.e. the 
leaves do not change their positions once they fall in the river.
*/

#include<map>

int solution(int X, vector<int> &A) 
{
    int N=A.size();
    map<int,int>Remaining;
    for(int i=1;i<=X;i++)
        Remaining[i]++;
    
    map<int,int>::iterator it=Remaining.begin();
    /*
    while(it!=Remaining.end())
        {
            cout<<(it->first)<<endl;
            it++;
        }
        */
    //vector<int>::iterator it=A.begin();
    map<int,int>::iterator it0;
    int j=0;
    
    while(j<N)
    {       
        it0=Remaining.find(A[j]);
            if(it0!=Remaining.end())
                Remaining.erase(it0);
        if(Remaining.empty())
            return j;  
            j++;
        }
        
    return -1;        
}


// SCORE =100%
