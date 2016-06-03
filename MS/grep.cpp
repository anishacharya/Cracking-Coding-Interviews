#include <iostream>
#include<string>
#include<cstring>
#include<vector>

using namespace std;

vector<int> pattern_match(string str, string pattern)
{
    int n=str.length();
    int m=pattern.length();
    int i=0;
    vector<int>out;
    while(i<=n-m)
    {
        string temp=str.substr(i,m);
        cout<<temp<<endl;
        if(pattern==temp)
           out.push_back(i); 
        i++;
    }
    return out;
}
void print(vector<int>V)
{
    for(int i=0;i<V.size();i++)
        cout<<V[i]<<endl;
}
int main() {
	// your code goes here
	string str="AABCDBC";
	string pattern="BC";
	print(pattern_match(str,pattern));
	return 0;
}
