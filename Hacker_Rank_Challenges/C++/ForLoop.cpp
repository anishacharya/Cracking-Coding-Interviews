/* Input Format

You will be given two positive integers, a and b (a?b), separated by a newline.

Output Format

For each integer n?[a,b] (so all numbers in that range):

If 1?n?9, then print the English representation of it. That is "one" for 1, "two" for 2, and so on.
Else if n>9 and it is even, then print "even".
Else if n>9 and it is odd, then print "odd".
Note: [a,b] represents the interval, i.e., [a,b]={x?Z| a?x?b}={a, a+1,…,b}
*/

#include <iostream>
#include <cstdio>
using namespace std;

void toletter(int n)
    {
    if(n==1)
        {cout<<"one"<<endl;
        return ;}    
    if(n==2)
        {
        cout<<"two"<<endl;
        return ;}
    if(n==3)
    {cout<<"three"<<endl;
     return ;}
    if(n==4)
    {cout<<"four"<<endl;
     return ;}
    if(n==5)
    {cout<<"five"<<endl;
     return ;}
    if(n==6)
    {cout<<"six"<<endl;
     return ;}
    if(n==7)
    {cout<<"seven"<<endl;
     return ;}
    if(n==8)
    {cout<<"eight"<<endl;
     return ;}
    if(n==9)
    {cout<<"nine"<<endl;
     return ;}   
}

void check_even(int i)
    {
    if(i%2 ==0)
        cout<<"even"<<endl;
    else
        cout<<"odd"<<endl;
}
int main() {
    // Complete the code.
        int lb,ub;
        cin>>lb>>ub;
    //cout<<lb<<" "<<ub<<endl;
    for(int i=lb;i<=ub;i++)
        {
        if(i<=9)
            toletter(i);
        else
            check_even(i);           
    }
    return 0;
}
