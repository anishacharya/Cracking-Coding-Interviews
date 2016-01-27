/*
Question -  remove duplicates from an unsorted array
Microsoft (Source-Glassdoor)
*/


#include<iostream>
#include<string>
#include<set>

using namespace std;

int main()
{
	set<char>Set;
	set<char>::iterator it;
	string a;

	cin>>a;
					for(int i=0;i<a.size();i++)
						{
							Set.insert(a[i]);
						}
					for ( it=Set.begin(); it!=Set.end(); ++it)
					    std::cout << ' ' << *it;
	return 0;
}
