//swapping without additional variable
// CTCI Moderate 1

#include<iostream>

using namespace std;

void swap(int*a,int*b)
{
		*a=*a-*b;

		*b=*b+*a;

		*a=*b-*a;


}
void print(int a[])
{
	int n=sizeof(a)/sizeof(a[0]);
	for (int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
int main()
{
	int a[]={-15,-5};
	//print(a);
	swap(&a[0],&a[1]);
	print(a);
	return 0;
}
