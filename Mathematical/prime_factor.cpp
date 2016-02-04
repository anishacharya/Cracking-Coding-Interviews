#include<iostream>
#include<iostream>
#include<list>

using namespace std;

list<int> Prime(int n)
{
	list<int>L;
	while(n%2==0)
	{
		L.push_back(2); 
		n=n/2;
	}
	
	for(int i=3;i*i<=n;i+=2)
	{
		while(n%i==0)
		{
			L.push_back(i);
			n=n/i;
		}		

	}
	
	if(n>2)
		L.push_back(n);
	return L;

}

void Print_vec(list<int>V)
{
	for(list<int>::iterator it=V.begin();it!=V.end();it++)
		cout<<*it<<" ";

}

int main()
{
	int n;
	cout<<"give the input"<<endl;
	cin>>n;
	list<int>Out=Prime(n);
	Print_vec(Out);
	return 0;
}
