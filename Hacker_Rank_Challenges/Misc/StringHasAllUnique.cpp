/*
 * StringHasAllUnique.cpp
 *Implement an algorithm to determine if a string has all unique characters

 *  Created on: Oct 23, 2014
 *      Author: anish
 */
#include<iostream>
#include<set>
#include<string>

using namespace std;

int main()
{
set<char>Set;
set<char>::iterator it;
std::pair<set<char>::iterator,bool> ret;
string a;

bool flag=false;

cin>>a;

for(int i=0;i<a.size();i++)
{
	ret=Set.insert(a[i]);
	if(ret.second==false)
		{
			flag=true;
			break;
		}
}
if(flag==true)
	cout<<"not-unique"<<endl;
else cout<<"unique"<<endl;

return 0;
}

