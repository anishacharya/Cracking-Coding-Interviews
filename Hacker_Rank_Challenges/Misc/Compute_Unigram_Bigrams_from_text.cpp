#include <iostream>
#include <map>
#include <cstring>
#include <fstream>
#include <queue>
#include <boost/algorithm/string.hpp>
#include <list>
#include <algorithm>

using namespace std;

std::list<string> tokenizer()
{
	std::list<string> mylist;
	string filename;
	cout << "What file do you want to use for input? ";
	getline(cin, filename);
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

			mylist.push_back(token);
			token = strtok (NULL, " ,.-!;:");
		}
	}
	fin.close();


	return mylist;
}

void print_tokens(std::list<string>mylist)
{
	for (std::list<string>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
	{
		cout<<*it<<endl;
	}
}

std::list<string> compute_bigrams(std::list<string> mylist)
{

	std::list<string> bigrams;

	std::list<string>::iterator it_fast=mylist.begin();
	it_fast++;
	std::list<string>::iterator it=mylist.begin();
	while ( it_fast!=mylist.end())
	{
		bigrams.push_back(*it+*it_fast);
		it_fast++;
		it++;
	}

	return bigrams;
}

int main()
{
	std::list<string> tokens=tokenizer();
	print_tokens(tokens);
	std::list<string> bigrams=compute_bigrams(tokens);
	print_tokens(bigrams);
	return 0;
}

