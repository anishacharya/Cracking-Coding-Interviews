/*
Input Format

Input will contain four integers - a,b,c,d , one in each line.

Output Format

Print the greatest of the four integers. 
PS: I/O will be automatically handled.
*/

#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d)
    {
    int max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    if(d>max)
        max=d;
    return max;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
