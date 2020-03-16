#include<iostream>

using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int a[],int l,int r)
{
	int p=a[r];
	int ix=(l-1);

	for(int j=l;j<r;j++)
	{
		if(a[j]<=p)
		{
			ix++;
			swap(&a[ix],&a[j]);
		}
	}
	swap(a[ix+1],a[r]);
	return (ix+1);
}
void quicksort(int a[],int l,int r)
{
	if(l<r)
	{
	int p=partition(a,l,r);
	quicksort(a,l,p-1);
	quicksort(a,p+1,r);

	}
}


void print(int a[],int sizeofarray)
{
	for(int i=0;i<sizeofarray;i++)
	{
		cout<<a[i]<<endl;
	}
}

int main()
{
	int a[]={4,3,2,1};

	int n=sizeof(a)/sizeof(a[0]);
	//swap(&a[2],&a[5]);
	quicksort(a,0,n-1);
	print(a,n);
	return 0;

}
