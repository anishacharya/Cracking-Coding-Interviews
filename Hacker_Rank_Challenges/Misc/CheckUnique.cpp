/*
Check if String has all unique characters
Algo1:
Convert elements into ASCII
Sort string
The first time you encounter two consecutive same value in the sorted array you return false
else you return true
not very efficient- O(n^2) -worst (due to quicksort); O(nlogn) avg. ( due to quicksort)
worst case in second step if unique is O(n)
best case is O(1)
*/


#include<iostream>
#include<string>

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

bool unique(string a)
{

	int n=a.length();
	cout<<n<<endl;
	int b[n];
	for(int i=0;i<n;i++)
	{
		b[i]=(int)(a.at(i));
	}
	quicksort(b,0,n);
	print(b,n);

	for(int i=1;i<n;i++)
	{
		if(b[i]==b[i-1])
			break;
		else return true;
	}
	return false;
}

int main()
{
	std:: string str("aaaa");
	if(unique(str)==false)
		cout<<"not unique"<<endl;
	else
		cout<<"unique"<<endl;
	return 0;
}

