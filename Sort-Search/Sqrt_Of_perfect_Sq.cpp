#include <iostream>
using namespace std;

int squareroot(int n, int l, int r)
{
    if(n<0)
        return -1;
        
    if(l <= r)
    {
        int mid=(r+l)/2;
        cout<<mid<<endl;
        if((mid*mid)==n)
            return mid;
            
        else 
        {
            if((mid*mid)>n)
            {
                cout<<"mid sq is > n"<<endl;
                l=l; r=mid-1;
                cout<<"l="<<l<<"r="<<r<<endl;
                return squareroot(n,l,mid-1);
            }
        
            else
            {
                 cout<<"mid sq is < n"<<endl;
                 l=mid+1; r=r;
                 cout<<"l="<<l<<"r="<<r<<endl;
                return squareroot(n,mid+1,r);
            }
        }
    }
    cout<<"It's not a perfect Square"<<endl;
    return -1;
}

int main() 
{
	int n=49;
	
	int l=0;
	int r=n;

	int root=squareroot(n,l,r);

	cout<<root;
	return 0;
}
