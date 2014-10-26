
//assumes sorted in increasing order
//implement a Binary Search

#include<iostream>

using namespace std;

int binarysearch(int a[],int start,int end,int key)
{

	if(end>=start)
	{
		int mid=start+(end-1)/2;
		if(a[mid]==key)
			return mid;
		else
		{
			if(a[mid]>key)
			{
				end=mid-1;
				return binarysearch(a,start,end,key);
			}
			if(a[mid]<key)
			{
				start=mid+1;
				return binarysearch(a,start,end,key);
			}
		}

	}

	return -1;
}

int main()
{
	int a[]={1,2,3,4,5};
	int start=0;
	int end=sizeof(a)/sizeof(a[0]);
	end=end-1;
	//cout<<end;
	int result=binarysearch(a,start,end,1);
	cout<<result<<endl;
return 0;
}
