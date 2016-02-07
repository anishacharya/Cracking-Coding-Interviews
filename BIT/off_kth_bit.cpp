#include<iostream>

using namespace std;

int off_kth_bit(int x,int k)
{
	return  (x& ~(1<<(k-1)));
}

int main()
{
	cout<<off_kth_bit(2,2)<<endl;
	return 0;
}
