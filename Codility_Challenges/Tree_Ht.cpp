/*
Write a function:
int solution(tree * T);
that, given a non-empty binary tree T consisting of N nodes, returns its height. 
*/
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int maxima(int a,int b)
{
    if(a>=b)
        return a;
    return b;
    }

int solution(tree * T) {
    // write your code in C++11
    if(T==NULL)
        return -1;
    int lh=solution(T->l);
    int rh=solution(T->r);
    
    
    return maxima(lh,rh)+1;
}


//SCORE : 100%
