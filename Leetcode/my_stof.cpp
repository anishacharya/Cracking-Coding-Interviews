/* 
my string to float
*/
#include <iostream>
#include <math.h>
using namespace std;

double my_stof(string str)
{
    int i=0;
    double num=0;
    for(;str[i]!='.';i++)
        num=num*10 + (str[i]-'0');
    cout<<num<<endl;
    i++;
    
    int count=1;
    
    while(i<str.length())
    {
        double dig=pow(10,count);
        num= num + (str[i]-'0')/dig;
        count++;
        i++;
    }
    return num;
    
}

int main() {
	// your code goes here
	string str="10.52";
	double number=my_stof(str);
	cout<<number;
	return 0;
}

