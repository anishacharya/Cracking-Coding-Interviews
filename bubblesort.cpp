//Bubble Sort
/*
This always takes O(n^2)
See the other bubble_optimized which doesn't perform sort
if already sorted and takes O(n) in average
*/


#include<iostream>

using namespace std;

void swap(int *xp,int *xq)
{
	int temp=*xp;
	*xp=*xq;
	*xq=temp;
}

void bubblesort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		//int tmp=i;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
			swap(&a[j+1],&a[j]);

		}
	}
}

int main()
{
	int a[]={3,3,2,1,1,5};
	int n=sizeof(a)/sizeof(a[0]);
	bubblesort(a,n);

	for(int i=0;i<n;i++)
		cout<<a[i];

return 0;
}
