/*
Problem Statement

Your teacher has given you the task to draw the structure of a staircase. Being an expert programmer, you decided to make a program for the same. You are given the height of the staircase. You need to print a staircase as shown in the example.

Input Format

You are given an integer N depicting the height of the staircase.

Constraints 
1≤N≤100
Output Format

Draw a staircase of height N in the format given below.

For example:

     #
    ##
   ###
  ####
 #####
######
Staircase of height 6, note that last line has 0 spaces before it.



*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin>>N;
    
    int i=N-1;
    
    while(i>=0)
        {
        for(int j=0;j<i;j++)
            cout<<" ";
        for(int k=0;k<N-i;k++)
            cout<<"#";
        cout<<endl;
        i--;
    }
    
    
    return 0;
}
