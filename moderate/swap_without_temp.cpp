#include<iostream>

using namespace std;

void swap(int &a,int &b)
{
	a=a+b;
	b=a-b;
	a=a-b;

}

int main()
{
	int a,b;
	cout<<"input a and b"<<endl;
	cin>>a; cin>>b;
	swap(a,b);
	cout<<"a="<<a<<" , "<<"b="<<b<<endl;
	return 0;
}
