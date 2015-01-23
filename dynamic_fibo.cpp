//dynamic version of fibonacci series

#include<iostream>
#define NIL 0
#define MAX 100

int memory[MAX];

using namespace std;

void initialize()
{
for(int i=0;i<MAX;i++)
	memory[i]=NIL;
}

int fibo(int n)
{
	if(memory[n]==NIL)
	{
		if (n<=1)
			memory[n]=n;
		else  memory[n]=fibo(n-1) + fibo(n-2);
	}
return memory[n];
}

int main()
{
int n;
 cin>>n;
 initialize();
 cout<<fibo(n);
 return 0;

}
