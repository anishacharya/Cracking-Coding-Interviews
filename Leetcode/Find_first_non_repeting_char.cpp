/*Find a 1st non-repeated char in the string for e.g. 
if string is "Salesforce is the best company to work for” returns 'l'
*/
#include <iostream>
#include <map>
#include <string>

using namespace std;

char first_unique(string s)
{
    map<char,int>M;
    int n = s.length();
    
    for(int i=0;i<n;i++)
    {
        if(s[i]!=' ')
           M[tolower(s[i])]++;
    }    
        
    
    map<char,int>::iterator it;   
    for(int i=0;i<n;i++)
    {
        if(s[i]!=' ')
        {    if( M[tolower(s[i])] == 1)
                return s[i];
            
        }
    }
    return NULL;
}

int main() 
{
	// your code goes here
	cout<<first_unique("Salesforce is a great company to work for");
	return 0;
}

