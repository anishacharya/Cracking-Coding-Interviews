/*
The sum of the squares of the first ten natural numbers is, 12+22+...+102=385. 
The square of the sum of the first ten natural numbers is, (1+2+⋯+10)2=552=3025. 
Hence the difference between the sum of the squares of the first ten natural numbers and 
the square of the sum is 3025−385=2640.
Find the difference between the sum of the squares of the first N natural numbers and the square of the sum.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long sum1,sum2,N,n;
    cin>>N;
    
    for(int i=0;i<N;i++)
    {
        cin>>n;
        sum1=n*n*(n+1)*(n+1)/4;
        sum2=n*(n+1)*((2*n)+1)/6;
        cout<<abs(sum1-sum2)<<endl;
    }
    return 0;
}
