//The good thing about selection sort is 
//it never makes more than O(n) swaps and can be useful when memory write is a costly operation. 


#include<iostream>

using namespace std;

void swap(int *xp, int *xq)
{
	int temp;
	temp= *xp;
	*xp=*xq;
	*xq=temp;

}

void selectionsort(int a[],int n)
{
	//int minIx=0;

	for(int minIx=0;minIx<n-1;minIx++)
		{
		int ix=minIx;
		for(int i=minIx+1;i<n;i++)
			{


						if(a[i]<a[ix])
								ix=i;


						//minIx++;
			}
		swap(&a[ix],&a[minIx]);
		}

}

int main()
{
	int a[]={10,1,2,3,5};
	//swap(&a[0],&a[3]);
	int n=sizeof(a)/sizeof(a[0]);
	selectionsort(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
