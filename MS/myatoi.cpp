#include <iostream>
#include<string>
#include<climits>
using namespace std;


int myatoi(string str)
{

    bool sign=false;
    long res=0;
    int i=0;
    
    while(str[i]==' ')
        i++;
        
    if(str[i]!='-' && str[i]!='+' && !isdigit(str[i]))
    {
        cout<<"No proper digit"<<endl; 
        return INT_MIN;
    }
        
    if(str[i]=='-')
    {
        //cout<<"here"<<endl;
        sign=true;
        i++;
    }
    if(str[i]=='+')
        i++;
        
    for(int n = i; n-i<=10 && n<str.length(); n++)
    {
        //cout<<"enters"<<endl;
        if(!isdigit(str[n]))
        {
            cout<<"Error1"<<endl;
            return INT_MIN;
        }
            
        res=res*10 +(str[n]-'0');
        
    }
        
    /*
        if(i<str.length())
        cout<<"Error"<<endl;
    */
    if(sign)
        res=(-1)*res;
        
    return (res > INT_MAX ? INT_MAX : (res < INT_MIN ? INT_MIN : res));
}
int main() 
{
	// your code goes here
	string str="-123";
	cout<<myatoi(str)<<endl;
	return 0;
}

