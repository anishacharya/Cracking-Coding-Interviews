#include<iostream>
using namespace std;

// 7x=8x-x ; 8*x=  2^3*x i.e. shift by 3 bits

int multiplier(int x)
{
return ((x<<3)-x);
} 
int main()
{
int x;
cin>>x;
cout<<multiplier(x)<<endl;
return 0;
}
