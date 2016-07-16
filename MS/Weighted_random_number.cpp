#include <iostream>
#include <stdlib.h>
#include <map>
using namespace std;

void print_num(map<char,int>M)
{
    int num = rand()%100; //45
    // cout<<num<<endl;
    int ub=0;

    map<char,int>:: iterator it;
    int lb = 0;
    
    for(it=M.begin();it!=M.end();it++)
    {
        ub += it->second; 
        
        if(num >= lb && num < ub)
        {
            cout<<it->first;
            return;
        }
        
        lb = ub;
    }
    
}

int main() {
	map<char,int>M;
	M['A']=10;
	M['B']=20;
	M['C']=30;
	M['D']=40;
	
	//int num=25;
	
	print_num(M);
	
	return 0;
}

