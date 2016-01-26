#include<iostream>

using namespace std;

int dec2bin(int n)
{
if(n==0)
 return 0;

int bin=0; int i=1;

while(n!=0)
{
 bin=bin+(n%2)*i;
 i=i*10;
 n=n/2;
}
return bin;

}

int main()
{
int dec;
cin>>dec;
cout<<dec2bin(dec)<<endl;
return 0;

}
