#include<iostream>

using namespace std;

long add_without_addition(int a,int b)
{
if(b==0)
 return a;
return add_without_addition((a^b),(a&b)<<1);
}

int main()
{
int a,b;
cin>>a; cin>>b;
cout<<add_without_addition(a,b)<<endl;
return 0;
}
