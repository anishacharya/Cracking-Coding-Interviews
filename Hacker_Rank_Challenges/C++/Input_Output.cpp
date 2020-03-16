// Input Format
//The first line of the input contains three integers A,B and C.
//1?A,B,C?1000
//Output Format
//In a single line print the sum of the three numbers.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    int sum=0;
    while(cin>>n)
        sum=sum+n;
    cout<<sum;
    return 0;
}

