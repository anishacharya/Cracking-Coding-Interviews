#include <iostream>
#include<stdlib.h>
#include<map>
using namespace std;

void print_num(map<char,int>M)
{
    int num=rand()%100;
    cout<<num<<endl;
    int count=0;
    map<char,int>:: iterator it;
    for(it=M.begin();it!=M.end();it++)
    {
        count+=it->second;
        if(num>0 && num<=count)
            cout<<it->first;
            
        
    }
    
}

int main() {
	map<char,int>M;
	M['A']=10;
	M['B']=20;
	M['C']=30;
	M['D']=40;
	

	
	print_num(M);
	
	return 0;
}

