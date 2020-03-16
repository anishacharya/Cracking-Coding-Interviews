/*You are given a positive integer, n,:

If 1?n?9, then print the English representation of it. That is "one" for 1, "two" for 2, and so on.
Otherwise print "Greater than 9" (without quotes).
Input Format

Input will contain only one integer, n.

Output Format

Print the output as described above.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    if(n==1)
        {cout<<"one";
        return 0;}    
    if(n==2)
        {
        cout<<"two";
        return 0;}
    if(n==3)
    {cout<<"three";
     return 0;}
    if(n==4)
    {cout<<"four";
     return 0;}
    if(n==5)
    {cout<<"five";
     return 0;}
    if(n==6)
    {cout<<"six";
     return 0;}
    if(n==7)
    {cout<<"seven";
     return 0;}
    if(n==8)
    {cout<<"eight";
     return 0;}
    if(n==9)
    {cout<<"nine";
     return 0;}
    else
        cout<<"Greater than 9";
   return 0;
}
