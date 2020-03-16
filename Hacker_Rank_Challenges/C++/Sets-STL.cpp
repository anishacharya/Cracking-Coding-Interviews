/*
you will be give Q queries.Each query is of one of the three types:

1 x:Add an element x to the set.
2 x:Delete an element x from the set. (If the number x is not present in the set then do nothing).
3 x:If the number x is present in the set then print "Yes"(without quotes) else print "No"(without quotes).

Input Format

The first line of the input contains Q where Q is the number of queries. The next Q lines contain 1 query each. Each query consists of two integers y and x where y is the type of the query and x is an integer.

Constraints
1<=Q<=105
1<=y<=3
1<=x<=109

Output Format

For queries of type 3 print "Yes"(without quotes) if the number x is present in the set and if not present then print "No"(without quotes).
Each query of type 3 should be printed in a new line.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
#include <sstream>
#include<istream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    int n,a,b;
    cin>>n;
    
    set<int>SET;
    
    for(int i=0;i<n;i++)
        {
        cin>>a;
        cin>>b;
        if(a==1)
            SET.insert(b);
        if(a==2)
            SET.erase(b);
        if(a==3)
            {
            set<int>::iterator itr=SET.find(b);
            if(itr==SET.end())
                cout<<"No"<<endl;
            else 
                cout<<"Yes"<<endl;
        }
    }
    
    return 0;
}
