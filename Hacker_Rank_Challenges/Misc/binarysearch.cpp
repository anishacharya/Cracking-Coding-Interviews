
//assumes sorted in increasing order
//implement a Binary Search

#include<iostream>

using namespace std;

int search(int a[],int i,int l,int r)
{
	int m=(l+r)/2;

	if(a[m]==i)
		return m;
	else
	{
		if(i<a[m])
			return search(a,i,l,m-1);
		else
			return search(a,i,m+1,r);
	}
	return -1;
}
int main()
{
	int a[]={1,2,3,4,5,6,7,8};
	int n=sizeof(a)/sizeof(a[0]);


	int m= search(a,5,0,n-1);
	if(m==-1)
		cout<<"not found";
	else
		cout<<m;

	return 0;


}

