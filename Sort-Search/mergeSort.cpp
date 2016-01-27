#include<iostream>

using namespace std;


void print(int a[],int sizeofarray)
{
	for(int i=0;i<sizeofarray;i++)
	{
		cout<<a[i]<<endl;
	}
}


void merge(int a[],int l, int m, int r)
{
	int n1=m-l+1;
	int n2=r-m;

	int L[n1];
	int R[n2];

	for(int i=0;i<n1;i++)
		L[i]=a[l+i];
	for(int j=0;j<n2;j++)
		R[j]=a[m+1+j];

	int i=0;int j=0;int k=l;

	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
			{
				a[k]=L[i];
				i++;
			}
		else
			{
				a[k]=R[j];
				j++;
			}
		k++;
	}

	while(i<n1)
	{
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=R[j];
		j++;
		k++;
	}

}



void mergesort(int a[],int start,int end)
{
	if(start<end)
	{
	int m=(start+end)/2;
	mergesort(a,start,m);
	mergesort(a,m+1,end);
	merge(a,start,m,end);

	}
}


int main()
{
	int a[]={3,2,1,4,4,6,8};
	int n=sizeof(a)/sizeof(a[0]);
	//cout<<n;
	//print(a,n);
	mergesort(a,0,n-1);
	print(a,n);

	return 0;
}
