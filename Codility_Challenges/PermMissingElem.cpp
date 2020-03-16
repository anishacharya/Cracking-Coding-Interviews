/*
A zero-indexed array A consisting of N different integers is given. The array contains integers in the range [1..(N + 1)], which means that exactly one element is missing.
Your goal is to find that missing element.
Write a function:
int solution(int A[], int N);
that, given a zero-indexed array A, returns the value of the missing element.

*/
// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99
    int Sum=(N+1)*(N+2)/2;
    for(int i=0;i<N;i++)
        Sum=Sum-A[i];
    return Sum;
}
