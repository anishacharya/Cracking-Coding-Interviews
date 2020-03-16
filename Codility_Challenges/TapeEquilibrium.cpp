/*
A non-empty zero-indexed array A consisting of N integers is given. Array A represents numbers on a tape.
Any integer P, such that 0 < P < N, splits this tape into two non-empty parts: A[0], A[1], ..., A[P ? 1] and A[P], A[P + 1], ..., A[N ? 1].
The difference between the two parts is the value of: |(A[0] + A[1] + ... + A[P ? 1]) ? (A[P] + A[P + 1] + ... + A[N ? 1])|
In other words, it is the absolute difference between the sum of the first part and the sum of the second part.
For example, consider array A such that:
A[0] = 3 A[1] = 1 A[2] = 2 A[3] = 4 A[4] = 3
We can split this tape in four places:
* P = 1, difference = |3 ? 10| = 7 
* P = 2, difference = |4 ? 9| = 5 
* P = 3, difference = |6 ? 7| = 1 
* P = 4, difference = |10 ? 3| = 7 
Write a function:
int solution(int A[], int N);
that, given a non-empty zero-indexed array A of N integers, returns the minimal difference that can be achieved.

*/
// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
#include<math.h>
#include <limits.h>
int sum_range(int A[],int lb,int ub)
{
    int sum=0;
    if(lb==ub)
        return A[lb];
    while(lb<=ub)
    {
        sum=sum+A[lb];
        lb++;
        }
    return sum;
}

int solution(int A[], int N) {
    // write your code in C99
    int out=INT_MAX;
    for(int i=0;i<N;i++)
    {
        int temp=sum_range(A,0,i)-sum_range(A,i+1,N);
        if(temp<0)
            temp=-temp;
        //printf("%d",temp);
        if(temp<out)
            out=temp;
                
        }
        
    return out;    
    
}
