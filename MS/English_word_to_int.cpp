#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<sstream>

using namespace std;

bool isMultiply(string s)
{

if ( s=="billion" || s=="million" || s=="thousand"|| s=="hundread" )
            return true;
        else
            return false;
}

int convert(string s)
{
	map<string,int>M;
	M["zero"]=0;	M["one"]=1;
	M["two"]=2;	M["three"]=3;
	M["four"]=4;	M["five"]=5;
	M["six"]=6;	M["seven"]=7;
	M["eight"]=8;	M["nine"]=9;
	M["ten"]=10;	M["fifteen"]=11;
	M["eleven"]=11;	M["sixteen"]=13;
	M["twelve"]=12;   M["seventeen"]=15;
	M["thirteen"]=13;   M["eighteen"]=17;
	M["fourteen"]=14;	M["nineteen"]=19;
	M["twenty"]= 20;
        M["thirty"]= 30;
        M["fourty"]= 40;
        M["fifty"]= 50;
        M["sixty"]= 60;
        M["seventy"]= 70;
        M["enighty"]= 80;
        M["ninety"]= 90;
	M["hundread"]= 100;
        M["thousand"]= 1000;
        M["million"]=1000000;
        M["billion"]=1000000000;

	int value = 0;
	string buf; // Have a buffer string
    	stringstream ss(s); // Insert the string into a stream
	
	vector<string> tokens;
	
	while (ss >> buf)
        	tokens.push_back(buf);

	int local = 0;
	for(int i=0;i<tokens.size();i++)
	{
		if (isMultiply(tokens[i]) && tokens[i]=="hundread" )
			local*=M[tokens[i]];
		else if (isMultiply(tokens[i]))
		{
                	local *= M[tokens[i]];
                	value += local;
                	local = 0;
            	}
		else
			local+=M[tokens[i]]; 

	}
	value+=local;
	return value;
}

int main()
{
	cout<<convert("one million two hundread")<<endl;
	return 0;
}
