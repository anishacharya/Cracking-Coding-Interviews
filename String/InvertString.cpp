/*
  Invert a string 
  ex: abcd -> dcba; abcde->edcba
 * invertstring.cpp
 *
 *  Created on: Oct 24, 2014
 *      Author: anish
 */

#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>

using namespace std;
int main()
{
	string a;
	char temp;
	cin>>a;
	int n=a.length();


		for(int i=0;i<n/2;i++)
		{
			temp=a[i];
			a[i]=a[n-1-i];
			a[n-1-i]=temp;

		}
		cout<<a<<endl;
		return 0;
}
