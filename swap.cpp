#include<iostream>

using namespace std;
//Function of Swapping two elements 
void swap(int *xp, int *xq)
{
	int temp;
	temp= *xp;
	*xp=*xq;
	*xq=temp;

}
//test case
int main()
{
	int a[]={10,1,2,3,5};
	swap(&a[0],&a[3]);
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
