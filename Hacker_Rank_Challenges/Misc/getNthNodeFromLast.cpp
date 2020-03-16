//Access the Nth node from last - CTCI

#include<iostream>
#include<list>

using namespace std;

int getNthNode(list<int>List,int index)
{
	std::list<int>::iterator it;
	it=List.end();
	for(int j=1;j<index+1;j++)
		it--;
	return *it;

}

int main()
{
std::list<int>List;
int myints[]={1776,7,4,5,15,52};
List.assign(myints,myints+6);
//std::list<int>::iterator it;
cout<<getNthNode(List,3)<<endl; //test case
return 0;
}




