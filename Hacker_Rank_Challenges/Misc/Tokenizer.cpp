/*
Reads a text file and returns the tokens
in a list, and prints the list
*/

#include <iostream>
#include <map>
#include <cstring>
#include <fstream>
#include <queue>
#include <boost/algorithm/string.hpp>
#include <list>

using namespace std;

std::map<std::string, int> Tokenize()
{
	string filename;
	cout << "What file do you want to use for input? ";
	getline(cin, filename);

	std::map<string,int> mymap;

	ifstream fin;
	fin.open(filename.c_str());
	char * token;

	string str;

	while (fin >> str)
	{
		char *fileName = (char*)str.c_str();
		token = strtok (fileName," ,.-!;:");
		while (token != NULL)
		{
			boost::algorithm::to_lower(token);
			mymap[token]++;
			token = strtok (NULL, " ,.-!;:");
		}
	}
	fin.close();
	return mymap;
}



void print (std::list<string> myMap)
{
	for (std::list<string>::iterator it=myMap.begin(); it!=myMap.end(); ++it)
	{
		std::cout << *it<< endl;
	}
}

std::list<string>Tokenize_list()
{
	std::list<string> mylist;
	std::map<std::string, int> myMap =Tokenize();

	for (std::map<string,int>::iterator it=myMap.begin(); it!=myMap.end(); ++it)
	{
		mylist.push_back(it->first);
	}

	return mylist;
}


int main()
{
	std::list<string> mylist= Tokenize_list();
	print(mylist);
	return 0;
}
