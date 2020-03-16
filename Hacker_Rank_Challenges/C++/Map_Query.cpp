/*
You are appointed as the assistant to a teacher in a school and she is correcting the answer sheets of the students.Each student can have multiple answer sheets.So the teacher has Q queries:

1 X Y :Add the marks Y to the student whose name is X.

2 X: Erase the marks of the students whose name is X.

3 X: Print the marks of the students whose name is X. (If X didn't get any marks print 0.)

Input Format

The first line of the input contains Q where Q is the number of queries. The next Q lines contain 1 query each.The first integer, type of each query is the type of the query.If query is of type 1, it consists of one string and an integer X and Y where X is the name of the student and Y is the marks of the student.If query is of type 2 or 3,it consists of a single string X where X is the name of the student.

*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int Q,i=0;
    cin>>Q;
    map<string,int>M;
    while(i<Q)
    {
       int type,score;
       string Name;
       cin>>type;
        
       if(type==1)
        {
            cin>>Name; cin>>score;
            M[Name]=M[Name]+score;
        }
       if(type==2)
        {
            cin>>Name;
            M.erase(Name);
        }
       if(type==3)
           {
           cin>>Name;
           cout<<M[Name]<<endl;
       }
       i++;
    }
    return 0;
}