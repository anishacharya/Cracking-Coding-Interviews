#include<iostream>

using namespace std;

bool kthbitset(unsigned int x,int k)
{
	return (x&(1<<(k-1)))?true:false;
}

bool check_palindrome(int x)
{
int l=1;
int r=sizeof(unsigned int)*8;

while(l<r)
{
	if(kthbitset(x,l)!=kthbitset(x,r))
		return false;
	l++;r--;
}
return true;

}

int main()
{
    unsigned int x = (1<<15) + (1<<16);
    cout << check_palindrome(x) << endl;
    x = (1<<31) + 1;
    cout << check_palindrome(x) << endl;
return 0;
}
