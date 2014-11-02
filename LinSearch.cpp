#include<iostream>
using namespace std;

int search(int a[],int key,int n)
{
	int ix=0;
	//int n=sizeof(a)/sizeof(a[0]);
	//cout<<n;

	for(int j=0;j<n;j++)
	{
		if(a[j]==key)
			ix=j;

	}
	return ix;
}

int main()
{
	int a[]={16,18,25,1,12,11,29,26};

	int n=sizeof(a)/sizeof(a[0]);

	int ix=search(a,29,n);
	if(ix==0)
		cout<<"not found";
	else cout<<ix;
	return 0;
}
