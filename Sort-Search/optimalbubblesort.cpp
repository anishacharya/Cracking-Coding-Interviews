//min O(n), worst O(n^2)

//Due to its simplicity, bubble sort is often used to introduce the concept of a sorting algorithm.
//In computer graphics it is popular for its capability to detect a very small error 
//(like swap of just two elements) in almost-sorted arrays and fix it with just linear complexity (2n). 
//For example, it is used in a polygon filling algorithm, where bounding lines are sorted by their x coordinate 
//at a specific scan line (a line parallel to x axis) and with incrementing y 
//their order changes (two elements are swapped) only at intersections of two lines (Source: Wikipedia)
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
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		//int tmp=i;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
			{swap(&a[j+1],&a[j]);
			flag=true;}

		}
		if(flag==false)
			break;
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
