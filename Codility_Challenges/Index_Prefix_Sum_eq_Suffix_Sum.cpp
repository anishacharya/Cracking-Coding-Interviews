// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
int Sum_Range(int A[],int lb,int ub)
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
    //int pivot=0;
    //printf(Sum_Range(A,0,4));
    if(Sum_Range(A,1,N)==0)
        return 0;
    for(int pivot=1;pivot<N;pivot++)
    {
        if(Sum_Range(A,0,pivot-1)==Sum_Range(A,pivot+1,N))
            return pivot;
    }
    return -1;
}
