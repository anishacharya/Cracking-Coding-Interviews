#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int N;
    cin>>N;
    int i=0;
    int current;
    double pos=0.0;
    double neg=0.0;
    double zero=0.0;
    
    while(i<N)
        {
        cin>>current;
        if(current ==0 )
            zero=zero+1;
        else if(current<0)
            neg=neg+1;
            else
            pos++;
          i++;  
    }
    cout<<pos/N<<endl;
    cout<<neg/N<<endl;
    cout<<zero/N<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}