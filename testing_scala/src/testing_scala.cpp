//============================================================================
// Name        : testing_scala.cpp
// Author      : Anish Acharya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int gcd(int x,int y)
{
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
}
int sumofint(int a,int b)
{
	if(a>b)
		return 0;
	return a+sumofint(a+1,b);
}
int sum_rec(int &sum,int a,int b)
{
	//int sum=0;
	if(a>b)
		return sum;
	sum=sum+a;
	return sum_rec(sum,a+1,b);
}

int sum(int a,int b)
{
	int sum=0;
	return sum_rec(sum,a,b);

}

int cube (int x)
{
	return x*x*x;
}
int sumofcubes(int a,int b)
{
	if(a>b)
			return 0;
	return (cube(a)+sumofcubes(a+1,b));
}

int main()
{
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	//int x=0;
	//cout<<gcd(15,20)<<endl;
	//cout<<sumofint(12,10);
	cout<<sum(2,4);
	return 0;
}
