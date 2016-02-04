//Multiply a given Integer with 3.5
// 3.5 = 7/2 = (8-1)/2

#include<iostream>
using namespace std;

float result(int x)
{
return (((x<<3)-x)>>1);

}

int main()
{
int x; cin>>x;
cout<<result(x)<<endl;
return 0;
}
