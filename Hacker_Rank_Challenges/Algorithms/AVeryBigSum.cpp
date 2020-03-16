#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin>>N;
    int a[10];
    for(int j=0;j<N;j++)
        {
            cin>>a[j];
    }
    long int x;
    long int sum=0;
    for (int i=0;i<N;i++)
        {
            sum=sum+a[i];            
        }
    cout<<sum<<endl;
    return 0;
}